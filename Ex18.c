#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

int main ()
{

	int caixa [TAMANHO];

	int multiplo;

	setlocale (LC_ALL, "Portuguese");

	printf ("Digite um número.\n#: "); scanf ("%d", &multiplo);

	printf ("\nMúltiplos do número recebido\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		caixa [i] = multiplo * i;
		printf ("[%3d]\n", caixa [i]);
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}