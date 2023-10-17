#include <stdio.h>
#include <locale.h>
#include <math.h>

#define TAMANHO 10

int main ()
{
	int v [TAMANHO];
	int m = 0; //media

	float n = TAMANHO;

	double somatorio = 0;
	double desvio_padrao = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("\nDigite os valores númericos para armazenar no Vetor.\n");

	for (int i = 0; i < n; i++)
	{
		printf ("#: "); scanf ("%d", &v [i]);
		m += v [i];
	}

	m = m / TAMANHO;

	for (int i = 1; i <= n; i++)
	{
		somatorio += pow (v [i] - m, 2);
	}

	desvio_padrao = sqrt (( 1 / (n - 1)) * somatorio);

	printf ("\nO Desvido Padrão deste Vetor é: %.2lf", desvio_padrao);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}