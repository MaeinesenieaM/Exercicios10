#include <stdio.h>
#include <locale.h>

#define TAMANHO /*Dos Vetores*/ 10

int main ()
{

	int caixa [TAMANHO];
	int lista [TAMANHO]; //Lista para saber se o valor ja foi lido.

	//guarda 0 em todas as posi��es
	for (int set = 0; set < TAMANHO; set++) { lista [set] = 0;} 

	//Conta quantas vezes um n�mero foi repetido.
	int repetidor = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insire os n�mero que ir�o ser guardados no vetor.\n");

	for (int i = 0; i < TAMANHO; i++)
	{
		printf ("[%2d] #: ", i + 1); scanf ("%d", &caixa [i]);
	}

	for (int i = 0; i < TAMANHO; i++)
	{
		repetidor = 0;
		for (int pos = i; pos < TAMANHO; pos++)
		{
			if (caixa [i] == caixa [pos] && lista [pos] != 1)
			{
				repetidor++;
				lista [pos] = 1;
			}
		}
		if (repetidor > 1)
		{
			printf ("\n O n�mero %d foi repetido.", caixa [i]);
		}
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}