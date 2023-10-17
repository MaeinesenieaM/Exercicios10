#include <stdio.h>
#include <locale.h>
#include <math.h>

#define TAMANHO 10

int main ()
{
	int caixa [TAMANHO];

	setlocale (LC_ALL, "Portuguese");

	printf ("\nDigite os valores númericos para armazenar no Vetor.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%d", &caixa [i]);
	}

	for (int i = 0; i < TAMANHO; i++)
	{
		int v = caixa [i];
		if ((v == 2 || v == 3 || v == 5 || v == 7) || (v % 2 != 0 && v % 3 != 0 && v % 5 != 0 && v % 7 != 0))
		{
			printf ("\nNúmero Primo: [%3.d] | Posição: [%d]", v, i);
		}
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}