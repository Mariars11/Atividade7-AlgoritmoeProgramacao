#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,  idade[100], maiorIdade = 0;
	float quantPessoas, somaIdades = 0.0, mediaIdades = 0.0;
	
	printf("Informe a quantidade de pessoas: ");
	scanf("%f", &quantPessoas);
	
	for(i = 0; i < quantPessoas; i++){
		printf("Informe a idade da pessoa[%d]: ", i + 1);
		scanf("%d", &idade[i]);
		somaIdades += idade[i]; 
		if(maiorIdade < idade[i])
			maiorIdade = idade[i];
	}
	mediaIdades = somaIdades / quantPessoas;
	
	printf("\nA MÉDIA DAS IDADES É: [%.2f]\n", mediaIdades);
	printf("A MAIOR IDADE FOI [%d] NA POSICÃO [%d]", maiorIdade, i);
	
	return 0;
}
