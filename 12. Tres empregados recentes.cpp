#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
	int counter, matricula[50], meses[50], i = 1, j = 1, troca;
	bool confirmadaMatric = true, confirmadoMeses = true;
	
	
	while(matricula[i] != 0 || i <= 50){
		do{
			printf("Informe a quantos meses esse funcionário trabalha nessa empresa: ");
			scanf("%d", &meses[i]);
				for(j = 0; j < i; j++){
					if(meses[i] == meses[j]){
						printf("ESSE MÊS JÁ FOI INFORMADO!\n");
						confirmadoMeses = true;
					}
					if(meses[i] != meses[j]){
						confirmadoMeses = false;
					}
				}
		}while(confirmadoMeses == true);
		do{
			printf("Informe a matrícula desse funcionário: ");
			scanf("%d", &matricula[i]);
				for(j = 0; j < i; j++){
					if(matricula[i] == matricula[j]){
						printf("ESSA MATRÍCULA JÁ FOI INFORMADA!\n");
						confirmadaMatric = true;
					}
					if(matricula[i] != matricula[j]){
						confirmadaMatric = false;
											
					}
				}
		}while(confirmadaMatric == true);
		if(matricula[i] == 0) break;
		i++;
	}
	for(counter = 1; counter <= i; counter++){
		for(int k = counter + 1; k <= i; k++){
			if(meses[counter] > meses[k]){
				troca = meses[k];
				meses[k] = meses[counter];
				meses[counter] = troca;
				
				troca = matricula[k];
				matricula[k] = matricula[counter];
				matricula[counter] = troca;
			}
		}
	}
	printf("=======================================\n");
	printf(" DADOS COLETADOS DOS TRÊS FUNCIONÁRIOS: ");
	printf("\n");
	printf("=======================================\n");	
	for(counter = 1; counter <= 3; counter++){
		printf("MESES: %d\n", meses[counter]);
		printf("MATRICULA: %d\n", matricula[counter]);
	}
	printf("=======================================\n");
	return 0;
}
