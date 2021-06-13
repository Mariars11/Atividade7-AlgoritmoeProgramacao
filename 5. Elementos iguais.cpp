#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantNum, quantRep = 0, numRep, num[80], i;
	
	printf("Informe quantos números serão lidos: ");
	scanf("%d", &quantNum);
	
	for(i = 1; i <= quantNum; i++){
		printf("Informe um número: ");
		scanf("%d", &num[i]);
	}
	printf("Qual número você deseja saber se repetiu? ");
	scanf("%d", &numRep);
	
	for(i = 1; i <= quantNum; i++){
		if(num[i] == numRep)
			quantRep++;			
	}
	system ("cls");
	printf("Esse número repetiu %d vezes!\nNas posições:\n", quantRep);
	for(i = 1; i <= quantNum; i++){
		if(num[i] == numRep)
			printf("[%d]\t", i);
	}
	
	return 0;
}
