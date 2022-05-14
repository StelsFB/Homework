#include "locale.h"
#include <stdio.h>


void rec(int n)
{
	if (n != 0)
		rec(n / 2);
	else return;
	printf("%d", n % 2);
	return;
}

float power(float x, int y)
{

	int i;
	float rezult = 1;

	for (i = 1; i <= y; ++i)
	{
		rezult *= x;
	}
	printf("%f", rezult);
	return 0;
}
int main()
{
	float n;
	int m;
	printf("Введите десятичное число : \n");
	scanf("%f", &n);
	rec(n);
	printf("\n");
	printf("степень : \n");
	scanf("%d", &m);
	power(n, m);
	return 0;
}