#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numFunc, matricula[100], maior = 0, menor = 0;
	float salario[100];  
	bool matriculaConfirmada = true;
	printf("Informe o número de funcionários dessa empresa: ");
	scanf("%d", &numFunc);
	
	for(int i = 1; i <= numFunc; i++){
		do{
			printf("Informe a matrícula do funcionario[%d]: ", i);
			scanf("%d", &matricula[i]);
			
			for(int contador = 0; contador < i; contador++){
				if(matricula[i] == matricula[contador]){
					printf("Essa matrícula já foi informada!\n");
				  	matriculaConfirmada = true;
				}
				if(matricula[i] != matricula[contador]){
				  	matriculaConfirmada = false;
				}			
			}
		}while(matriculaConfirmada == true);
		
		printf("Informe o salário do funcionario[%d]: ", i);
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
		printf("[O SALÁRIO DO FUNCIONÁRIO DE MATRÍCULA[%d] É: R$%.2f]\n", matricula[i], salario[i]);
	}
	printf("====================\n");
	printf("[O MENOR SALÁRIO VALE: R$%d]\n", menor);
	printf("[O MAIOR SALÁRIO VALE: R$%d]\n", maior);
	return 0;
}
