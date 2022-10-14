#include <stdio.h>
#include <stdlib.h>

char escolhas[][14] = {"Soma", "Subtracao", "Multiplicacao", "Divisao"};

char key;

int escolha = -1;
int repetir = 1;

void resetColour() {
    printf("\033[0m");
}

void white (char text[]) {
  printf("\033[1;37m");
  printf("%s", text);
  resetColour();
}

void green (char text[]) {
  printf("\033[1;32m");
  printf("%s", text);
  resetColour();
}

float soma(float numero1, float numero2) {
	return numero1 + numero2;
}

float subtracao(float numero1, float numero2) {
	return numero1 - numero2;
}

float multiplicacao(float numero1, float numero2) {
	return numero1 * numero2;
}

float divisao(float numero1, float numero2) {
	return numero1 / numero2;
}

int main()
{
	while (repetir) {
		system("cls");
		white("Escolha (\"q\" para sair e \"s\" para Aceitar): \n");
		for(int i = 0; i < 4; i++) {
			if (i == escolha){
				green("> ");
				printf("%i ", i);
				green(escolhas[i]);
				printf("\n");
			}
			else{
				printf("%i ", i);
				printf("%s \n", escolhas[i]);
			}
		}
		printf("\nDigite: ");
		key = getchar();
		
		if (key == 'q')
			return 1;

		if (escolha != -1 && key == 's')
			repetir = 0;

		switch (key)
		{
			case '0':
			case '1':
			case '2':
			case '3':
				escolha = key - '0';
				break;
		}
	}

	float numero1, numero2;

	printf("Digite o 1 numero: ");
	scanf("%f", &numero1);
	printf("Digite o 2 numero: ");
	scanf("%f", &numero2);

	if (numero2 == 0.0 && escolha == 3){
		printf("ERRO, não pode dividir por 0");
		return 1;
	}
    

	float resposta;
	switch(escolha) {
		case 0:
			resposta = soma(numero1, numero2);
			break;
		case 1:
			resposta = subtracao(numero1, numero2);
			break;
		case 2:
			resposta = multiplicacao(numero1, numero2);
			break;
		case 3:
			resposta = divisao(numero1, numero2);
			break;
	}

  printf("\nResposta: %.2f\n", resposta);

    return 0;
}

