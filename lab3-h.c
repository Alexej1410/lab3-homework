#include <stdio.h>
#include <locale.h>
#define K 273.15

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("������� 14\v");
	float C, Far, Kel;
	puts("������� ����� �������� �� �������");
	scanf("%f", &C);
	Far = (C * (9 / 5)) + 32;
	Kel = C + K;
	printf("����� �������� �� ���������� - %.2f\n", Far);
	printf("����� �������� � ��������� - %.2f", Kel);
}