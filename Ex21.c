#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAMANHO 10

int main ()
{

	int a [TAMANHO];
	int b [TAMANHO];

	int c [TAMANHO]; //Resultado de A - B, em repectivas posições.

	setlocale (LC_ALL, "Portuguese");

	printf ("\nDigite valores para guardar no vetor [A].\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%d", &a [i]);
	}

	printf ("\nDigite valores para guardar no vetor [B].\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%d", &b [i]);
	}

	printf (".\n.\n");

	for (int i = 0; i < TAMANHO; ++i)
	{
		c [i] = a [i] - b [i];
		printf ("A: [%3d] - B: [%3d] = C: [%4d]\n", a [i], b [i], c [i]);	
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}