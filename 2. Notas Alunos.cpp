#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, numAlunos;
	float notas[50];
	
	printf("Informe o número de alunos: ");
	scanf("%d", &numAlunos);
	
	for(i = 0; i < numAlunos; i++){
		printf("Informe a nota do aluno[%d]: ", i+1);
		scanf("%f", &notas[i]);		
	}
	printf("\n");
	for(i = 0; i < numAlunos; i++){
		printf("A nota do aluno[%d] é: |%.2f|\n", i+1, notas[i]);
	}
	
	return 0;
}
