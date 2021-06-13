#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float notas[30];
	
	for(i = 0; i < 30; i++){
		printf("Informe a nota do aluno[%d]: ", i + 1);
		scanf("%f", &notas[i]);
	}

	
	return 0;
}
