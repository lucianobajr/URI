#include <stdio.h>
#include <string.h>

unsigned short subFind(char *, char *);
unsigned short max(unsigned short, unsigned short);

void main ()
{

	char string1[60], string2[60];

	while (scanf(" %[^\n] %[^\n]", string1, string2) != EOF)
		printf("%hu\n", subFind(string1, string2));
}

unsigned short subFind(char *string1, char *string2)
{

	unsigned short linha, coluna;
	unsigned short qtsLinha, qtsColuna;

	qtsLinha = strlen(string1);
	qtsColuna = strlen(string2);

	unsigned short matriz[qtsLinha + 1][qtsColuna + 1];
	unsigned short resultado = 0;


	for (linha = 0; linha <= qtsLinha; ++linha)
	{

		for (coluna = 0; coluna <= qtsColuna; ++coluna)
		{
			if (linha == 0 || coluna == 0)
				matriz[linha][coluna] = 0;
			else if (string1[linha - 1] == string2[coluna - 1])
			{
				matriz[linha][coluna] = matriz[linha - 1][coluna - 1] + 1;
				resultado = max(resultado, matriz[linha][coluna]);
			}
			else
				matriz[linha][coluna] = 0;
		}
	}

	return resultado;

}

unsigned short max(unsigned short a, unsigned short b)
{
	if (a > b)
		return a;
	else
		return b;
}