#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, numLetras;
	char letras[30];
	
	printf("Informe quantas letras serão lidas: ");
	scanf("%d", &numLetras);
	fflush(stdin);
	
	for(i = 1; i <= numLetras; i++){
		printf("Informe uma letra: ");
		scanf("%c", &letras[i]);	
		fflush(stdin);	
	}
	for(i = numLetras; i >= 1; i--){
		printf("%c\t", letras[i]);
	}
	return 0;
}
