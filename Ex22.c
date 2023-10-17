#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAMANHO 2

int main ()
{

	int caixa01 [TAMANHO];
	int caixa02 [TAMANHO];

	int container [TAMANHO * 2]; //Guarda os dois vetores e mescla eles.

	setlocale (LC_ALL, "Portuguese");

	printf ("\nEscreva os números para guardar no primeiro vetor.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%d", &caixa01 [i]);
	}

	printf ("\nEscreva os números para guardar no segundo vetor.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%d", &caixa02 [i]);
	}

	printf ("\nMesclando os dois vetores, temos:\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		container [(i * 2) + 1] = caixa01 [i]; //NÚMERO IMPAR!!
		container [(i * 2)    ] = caixa02 [i]; //NÚMERO PAR!!
		printf ("[%3d]\n[%3d]\n", container [(i * 2)], container [(i * 2) + 1]);
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}