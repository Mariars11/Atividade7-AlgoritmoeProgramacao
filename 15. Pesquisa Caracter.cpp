#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantLetra, i, j, troca;
	char letra[30], caracterPesquisado;
	
	printf("Informe a quantidade de letras: ");
	scanf("%d", &quantLetra);
	fflush(stdin);
	
	for(i = 1; i <= quantLetra; i++){
		printf("Informe as letras: ");
		scanf("%c", &letra[i]);
		fflush(stdin);
	}

	printf("Informe o caracter que você deseja encontrar: ");
	scanf("%c", &caracterPesquisado);
	
	for(i = 1; i <= quantLetra; i++){
		if(letra[i] == caracterPesquisado)
		printf("CARACTER NA POSIÇÃO %d", i);
	}
	
	
	
	return 0;
}
