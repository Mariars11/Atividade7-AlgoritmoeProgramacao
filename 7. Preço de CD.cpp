#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, quantCd, num;
	float precoCd[100], precoFinal[100], percentual;
	
	printf("Quantos CDs tem na loja? ");
	scanf("%d", &quantCd);
	
	for(i = 1; i <= quantCd; i++){
		printf("Qual o valor do CD[%d]: ", i);
		scanf("%f", &precoCd[i]);
	}
	
	printf("\n--> ESCOLHA A OPÇÃO DESEJADA!\n");
	printf(" |1| PARA AUMENTAR O VALOR DE CADA CD EM 10%%\n");
	printf(" |2| PARA AUMENTAR O VALOR DE CADA CD DE ACORDO COM O PERCENTUAL INFORMADO\n");
	printf("\n Qual opção: ");
	scanf("%d", &num);
	switch(num){
		case 1: 
		for(i = 1; i <= quantCd; i++){
			precoFinal[i] = precoCd[i] * (1 + 0.1);
		}
		break;
		
		case 2:
			printf("Informe o valor percentual: ");
			scanf("%f", &percentual);
		for(i = 1; i <= quantCd; i++){
			precoFinal[i] = precoCd[i] * (1 + (percentual / 100));
		} 
		break;
	}
	for(int i = 1; i <= quantCd; i++){
		if(num == 1){
		printf("O valor de aumento percentual foi 10%%\n");	
		}
		else printf("O valor de aumento percentual foi [%.2f]\n", percentual);		
		printf("O valor sem aumento era: [%.2f]\n", precoCd[i]);
		printf("O valor com aumento: [%.2f]\n", precoFinal[i]);
	}
	return 0;
}
