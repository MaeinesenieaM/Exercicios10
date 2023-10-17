#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAMANHO 10

#define CODIGO 0
#define ALTURA 1

#define MAIOR 0
#define MENOR 1

int main ()
{

	float aluno [TAMANHO] [2];
	float m [2] [2]; //valor dos maiores e menores.

	int err = 0; //detecta erros

	setlocale (LC_ALL, "Portuguese");

	for (int i = 0; i < TAMANHO; i++)
	{	
		do
		{
			err = 0;

			printf ("\nDigite seu código de matricula.\n#: ");
			scanf ("%f", &aluno [i] [CODIGO]);

			for (int pos = 0; pos < i; pos++)
			{
				if (aluno [i] [CODIGO] == aluno [pos] [CODIGO])
				{
					err = 1;
					printf ("\n!!ESTE CÓDIGO JÁ ESTÁ CADASTRADO!!\n");
					break;
				}
			}

		} while (err != 0);

		printf ("\nDigite quanto você mede de alture em Metros.\n#: ");
		scanf ("%f", &aluno [i] [ALTURA]);

		printf ("\n| Aluno Cadastrado Com Sucesso! |\n");
	}

	//O primeiro aluno sempre tera o maior e menor valor.
	m [MAIOR] [CODIGO] = aluno [0] [CODIGO];
	m [MAIOR] [ALTURA] = aluno [0] [ALTURA];

	m [MENOR] [CODIGO] = aluno [0] [CODIGO];
	m [MENOR] [ALTURA] = aluno [0] [ALTURA];

	for (int i = 1; i < TAMANHO; i++)
	{
		if      (aluno [i] [ALTURA] - m [MAIOR] [ALTURA] > 0) 
		{
			m [MAIOR] [CODIGO] = aluno [i] [CODIGO];
			m [MAIOR] [ALTURA] = aluno [i] [ALTURA];
		}
		else if (aluno [i] [ALTURA] - m [MENOR] [ALTURA] < 0) 
		{
			m [MENOR] [CODIGO] = aluno [i] [CODIGO];
			m [MENOR] [ALTURA] = aluno [i] [ALTURA];
		}
	}

	printf ("\nO Maior Aluno Cadastrado foi [%2.f], com %.2fm\n", m [MAIOR] [CODIGO], m [MAIOR] [ALTURA]);
	printf ("\nO Menor Aluno Cadastrado foi [%2.f], com %.2fm\n", m [MENOR] [CODIGO], m [MENOR] [ALTURA]);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  ");

	return 0;
}