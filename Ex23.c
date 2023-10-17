#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAMANHO 5

int main ()
{

	float conjunto01 [TAMANHO];
	float conjunto02 [TAMANHO];

	double escalar = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("\nInsire valores para o primeiro conjunto.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%f", &conjunto01 [i]);
	}

	printf ("\nInsire valores para o segundo conjunto.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%f", &conjunto02 [i]);
	}

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("\n01: [%6.2f] | 02: [%6.2f]", conjunto01 [i], conjunto02 [i]);
		escalar += conjunto01 [i] * conjunto02[i];
	}

	printf ("\n\nProduto Escalar: [%7.2lf]", escalar);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}