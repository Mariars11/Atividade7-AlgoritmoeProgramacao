#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numFunc, matricula[100], maior = 0, menor = 0;
	float salario[100];  
	bool matriculaConfirmada = true;
	printf("Informe o n�mero de funcion�rios dessa empresa: ");
	scanf("%d", &numFunc);
	
	for(int i = 1; i <= numFunc; i++){
		do{
			printf("Informe a matr�cula do funcionario[%d]: ", i);
			scanf("%d", &matricula[i]);
			
			for(int contador = 0; contador < i; contador++){
				if(matricula[i] == matricula[contador]){
					printf("Essa matr�cula j� foi informada!\n");
				  	matriculaConfirmada = true;
				}
				if(matricula[i] != matricula[contador]){
				  	matriculaConfirmada = false;
				}			
			}
		}while(matriculaConfirmada == true);
		
		printf("Informe o sal�rio do funcionario[%d]: ", i);
		scanf("%f", &salario[i]);
		if(i == 1)
			menor = salario[i];
			else if(menor > salario[i])
				menor = salario[i];
		if(maior < salario[i])
			maior = salario[i];		
	}
	system("cls");
	printf("==================\n");
	printf("  DADOS COLETADOS");
	printf("\n");
	printf("===================\n");
	
	for(int i = 1; i <= numFunc; i++){
		printf("[O SAL�RIO DO FUNCION�RIO DE MATR�CULA[%d] �: R$%.2f]\n", matricula[i], salario[i]);
	}
	printf("====================\n");
	printf("[O MENOR SAL�RIO VALE: R$%d]\n", menor);
	printf("[O MAIOR SAL�RIO VALE: R$%d]\n", maior);
	return 0;
}
