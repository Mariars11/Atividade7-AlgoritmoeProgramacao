#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantCaracteres, i, j, vezesRepetiu = 0, repetiuMaisVezes = 0, quantBrancos = 0, quant_a = 0, quant_A = 0;
	char frase[80], par[2], par2[2], parMaisRepetiu[2];
	
	printf("Digite uma frase: ");
	fgets(frase, 80, stdin);
	
	quantCaracteres = strlen(frase);
	
	for(i = 0; i < quantCaracteres ; i++){
		switch(frase[i]){
			case ' ': quantBrancos++; break;
			case 'A': quant_A++; break;
			case 'a': quant_a++; break;
		}			
	}
		
	for(i = 0; i < quantCaracteres; i++){
		vezesRepetiu = 0;
		par[0] = frase[i];
		par[1] = frase[i+1];
		for(j = 0; j < quantCaracteres; j++){
			par2[0] = frase[j];
			par2[1] = frase[j+1];
				if(par[0] == par2[0] && par[1] == par2[1]){
					vezesRepetiu++;
				}					
		}
		if(vezesRepetiu > repetiuMaisVezes){
			repetiuMaisVezes = vezesRepetiu ;
			strcpy(parMaisRepetiu, par);
		}
	}
	
	printf("\n--> DADOS OBTIDOS: ");
	printf("\n");
	printf(" * A FRASE POSSUI %d CARACTERES\n", quantCaracteres);	
	printf(" * A QUANTIDADE DE CARACTERES EM BRANCO: %d\n", quantBrancos);
	printf(" * A QUANTIDADE DE CARACTERES |a|: %d\n", quant_a);
	printf(" * A QUANTIDADE DE CARACTERES |A|: %d\n", quant_A);
	printf(" * O PAR DE CARACTERES QUE MAIS SE REPETIU FOI: %c%c\n",parMaisRepetiu[0], parMaisRepetiu[1]);
	printf(" * TENDO SIDO REPETIDO %d vezes!", repetiuMaisVezes);
}
