#include <stdio.h>
#include "stdafx.h"
#include "math.h"

int main()
{
	int n, m, g;
	int h = 0;
	printf("Program rysuje choinke. Mozesz wybrac jej rozmiar\n");
	printf("Autor programu: Juliusz Stanczyk\n\n");
	printf("Podaj ile chcesz rzedow: ");
	scanf_s("%d", &n);
	printf("Podaj ile chcesz czesci choinki: ");
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++)
	{
		for (int i = 0; i < n; i++)
		{
			g = i + h;
			printf("\n");
			for (int a = 0; a < n / 2 - g + 20; a++)
			{
				printf(" ");
			}
			for (int j = 0; j <= g; j++)
			{
				printf("*");
			}
			for (int j = 1; j <= g; j++)
			{
				printf("*");
			}
			for (int a = 0; a < n / 2 - g + 20; a++)
			{
				printf(" ");
			}
		}
		h = 3;
	}
	if (m == 1 && n == 1)
	{
		printf("\n\n\nWspanialy pomysl na choinke (y)");
	}
	if (m > 100 || n > 30)
	{
		printf("\n\n\nNie szalej tak z tym rozmiarem ");
	}
	printf("\n\nKoniec programu.\n");
	system("PAUSE");
	return 0;
}