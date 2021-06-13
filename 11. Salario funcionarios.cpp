#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, quantFunc, maiorSalario, menorSalario;
	float salario[100], mediaSalario, somaSalario;
	
	printf("Informe quantos funcionarios tem nessa empresa: ");
	scanf("%d", &quantFunc);
	
	for(i = 1; i <= quantFunc; i++){
		printf("Informe o salário do funcionário[%d]: ", i);
		scanf("%f", &salario[i]);
		somaSalario += salario[i];
		if(i == 1)
			menorSalario = salario[i];
			else if (menorSalario > salario[i])
				menorSalario = salario[i];
		if(maiorSalario < salario[i])
			maiorSalario = salario[i];
	}
	mediaSalario = somaSalario / quantFunc;
	
	printf("========================\n");
	printf("    DADOS COLETADOS");
	printf("\n");
	printf("========================\n");
	printf("O MAIOR SALÁRIO É: R$%d\n", maiorSalario);
	printf("O MENOR SALÁRIO É: R$%d\n", menorSalario);
	printf("==============================================\n");	
	printf("A MÉDIA DOS SALÁRIOS DOS FUNCIONARIOS É: %.2f\n", mediaSalario);
	printf("==============================================\n");	
	return 0;
}
