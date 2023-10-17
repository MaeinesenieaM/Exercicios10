#include <stdio.h>
#include <locale.h>
#include <math.h>

#define TAMANHO 10

int main ()
{
	int v  [TAMANHO];

	int v1 [TAMANHO], v2 [TAMANHO];

	int v1_restante = 0, v2_restante = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("\nDigite 10 números para serem filtrados.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("#: "); scanf ("%d", &v [i]);

		if (v [i] % 2 == 0)
		{
			v2 [v2_restante] = v [i];
			v2_restante++;
		}
		else
		{
			v1 [v1_restante] = v [i];
			v1_restante++;
		}
	}

	printf ("\n  V1  #  V2  \n");

	for (int i = 0; i < TAMANHO; i++)
	{
		if (v1_restante > 0)
		{
			printf ("[%4.d]", v1 [i]);
			v1_restante--;
		}
		else
		{
			printf ("      ");
		}

		printf ("|");

		if (v2_restante > 0)
		{
			printf ("[%4.d]\n", v2 [i]);
			v2_restante--;
		}
		else
		{
			printf ("      \n");
		}
	}

	printf ("\n\n       z   z    Este foi ultimo!\n         z   z  Depois dessa vou até dormir.\n   ____o/|\n  |======|      BOA NOITE!\n");

	return 0;
}