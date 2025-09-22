#include <stdio.h>
#include <locale.h>
#define K 273.15

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Вариант 14\v");
	float C, Far, Kel;
	puts("введите число градусов по Цельсию");
	scanf("%f", &C);
	Far = (C * (9 / 5)) + 32;
	Kel = C + K;
	printf("число градусов по Фаренгейту - %.2f\n", Far);
	printf("число градусов в Кельвинах - %.2f", Kel);
}