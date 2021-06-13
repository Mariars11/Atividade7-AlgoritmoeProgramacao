#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, dados[100], quantNum;
	float soma = 0.0;
	
	printf("Quantos números você deseja somar? ");
	scanf("%d", &quantNum);
	for(i = 0; i < quantNum; i++){
		printf("Informe o número[%d]: ", i+1);
		scanf("%d", &dados[i]);
		fflush(stdin);
		soma = soma + dados[i];  
	
	}
	printf("A SOMA DOS NÚMEROS: %.1f", soma);
	return 0;
}
