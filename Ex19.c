#include <stdio.h>
#include <locale.h>

#define TAMANHO 50

int main ()
{

	int caixa [TAMANHO];

	setlocale (LC_ALL, "Portuguese");

	for (int i = 0; i < TAMANHO; i++)
	{
		caixa [i] = (i + 5 * i) % (i + 1);
		printf ("[%3d]\n", caixa [i]);
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}