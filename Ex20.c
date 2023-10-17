#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

int main ()
{

	int caixa01 [TAMANHO], caixa02 [TAMANHO];

	int err = 0;

	setlocale (LC_ALL, "Portuguese");

	printf ("Insire 10 valores para serem guardados.\n");

	for (int pos = 0; pos < TAMANHO; pos++) 
	{ 
		do
		{
			err = 0;

			printf ("#: ");	scanf ("%d", &caixa01 [pos]);

			if (caixa01 [pos] < 0 || caixa01 [pos] > 50) 
			{
				printf ("\n\n!!VALOR FORA DO PERMITIDO, O VALOR DEVE SER DE 0 A 50!!\n\n");
				err++;
			}

		} while (err != 0);

		if (caixa01 [pos] % 2 == 1) { caixa02 [pos] = caixa01 [pos]; }
		else 						{ caixa02 [pos] = 0;			 }
	}

	for (int pos = 0; pos < TAMANHO; pos++) 
	{
		printf ("01 [%3d] | 02 [%3.d]\n", caixa01 [pos], caixa02 [pos]); 
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}