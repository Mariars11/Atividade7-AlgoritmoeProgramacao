#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int m, i, l = 0, j, quantNotas, notas[80], notasRepetidas[80], freqNotas[80];
	
	printf("Informe a quantidade de notas: ");
	scanf("%d", &quantNotas);
	
	for(i = 0; i < quantNotas; i++){
		do{
			printf("Informe a nota de |0| a |10|: ");
			scanf("%d", &notas[i]);
		}while(notas[i] < 0 || notas[i] > 10);	
	}
	for(i = 0; i < quantNotas; i++){
		for(j = 0; j < quantNotas; j++){
			if(notas[i] == notas[j]){
				notasRepetidas[l] = notas[i];
				l++;
				for (m = 0; m < l; m++)
				{
					if (notasRepetidas[m] == notasRepetidas[m + 1]) 
						l--; 
				}
			}
				
		}
	}
	for(i = 0; i < l; i++){
		freqNotas[i] = 0;
		for(j = 0; j < quantNotas;j++){
			if(notasRepetidas[i] == notas[j]){
				freqNotas[i] += 1;
			}
		}
	}
	printf("\n");
	for(i = 0; i < l; i++){
		printf("O NÚMERO %d APARECEU %d VEZ/VEZES!\n", notasRepetidas[i], freqNotas[i]);
	}
}
