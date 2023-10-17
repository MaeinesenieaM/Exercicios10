#include <stdio.h>
#include <locale.h>

#define TAMANHO 100

int main ()
{
	int cem [TAMANHO];

	int somador = 0;

	setlocale (LC_ALL, "Portuguese");

	for (int i = 0; i < TAMANHO; i++)
	{
		while (somador - ((somador / 10) * 10) == 7 || somador == 7 || somador % 7 == 0) { somador++; }

		cem [i] = somador;
		printf ("Valor: [%3.d] | Lugar: [%3.d]\n", cem [i], i + 1);
		somador++;
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}