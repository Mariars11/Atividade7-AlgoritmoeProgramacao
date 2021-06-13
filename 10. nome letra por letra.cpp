#include <stdio.h>
#include <locale.h>

int main(){
	int i = 0;
	char letra[100];

	printf("---> INFORME SEU NOME LETRA POR LETRA!\n");
	printf("---> PARA FINALIZAR INFORME |#|\n");
	do{
		printf("Informe a letra: ");
		scanf("%c", &letra[i]);
		fflush(stdin);
		
		if(letra[i] == '#')	break;
			else i++;
					
	}while(true);
	
	for(int j = 0; j <= i - 1; j++){
		printf("%c", letra[j]);
	}
	return 0;
}
