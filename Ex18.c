#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

int main ()
{

	int caixa [TAMANHO];

	int multiplo;

	setlocale (LC_ALL, "Portuguese");

	printf ("Digite um n�mero.\n#: "); scanf ("%d", &multiplo);

	printf ("\nM�ltiplos do n�mero recebido\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		caixa [i] = multiplo * i;
		printf ("[%3d]\n", caixa [i]);
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}