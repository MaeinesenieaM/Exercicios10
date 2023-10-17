#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAMANHO 5

int main ()
{

	float caixa [TAMANHO];

	int codigo;
	int err;    //responsavel por alertar algum erro no codigo.

	setlocale (LC_ALL, "Portuguese");

	printf ("Digite 5 valores para serem guardados.\n");

	for (int pos = 0; pos < TAMANHO; pos++) { printf ("#: "); scanf ("%f", &caixa[pos]); }

	printf ("\nSelecione o codigo.\n");

	do
	{
		err = 0;

		printf ("\n[2] Exibir valores inversalmente\n[1] Exibir valores normalmente\n[0] Sair do programa\n");
		printf ("#: "); scanf ("%d", &codigo);

		switch (codigo)
		{
			case 0:
				exit (0);
				break;
			case 1:
				for (int pos = 0; pos < TAMANHO; pos++)		 { printf ("|%.2f\n", caixa[pos]); }
				break;
			case 2:
				for (int pos = TAMANHO - 1; pos >= 0; pos--) { printf ("|%.2f\n", caixa[pos]); }
				break;
			default:
				printf ("\n!!CODIGO INVALIDO TENTE NOVAMENTE!!\n");
				err++;
		}
	} while (err != 0);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}