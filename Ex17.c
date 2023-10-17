#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

int main ()
{

	int caixa [TAMANHO];

	setlocale (LC_ALL, "Portuguese");

	printf ("Insire 10 valores para serem guardados.\n");

	for (int pos = 0; pos < TAMANHO; pos++) 
	{ 
		printf ("#: ");	scanf ("%f", &caixa [pos]);

		if (caixa [pos] < 0) {caixa [pos] = 0;}
	}
	for (int pos = 0; pos < TAMANHO; pos++) 
	{ 
		printf ("|%f\n", caixa [pos]);   
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}