#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numA[10], numB[10], somaC[10], i, j, numPesquisa;
	
	for(i = 0; i < 10; i++){
		printf("Informe o númeroA[%d]: ", i+1);
		scanf("%d", &numA[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("Informe o númeroB[%d]: ", i+1);
		scanf("%d", &numB[i]);
	}
	
	for(i = 0; i < 10; i++){
		somaC[i] = numA[i] + numB[i];
		printf("%d + %d = %d\n", numA[i], numB[i], somaC[i]);
	}
	printf("Pesquisa um numero na soma do número A com o número B: ");
	scanf("%d", &numPesquisa);
	printf("\n");
	for(i = 0; i < 10; i++){
		if(somaC[i] == numPesquisa)
			printf("Número encontrado na posição %d\n", i+1);
	}
			
	
	return 0;
}
