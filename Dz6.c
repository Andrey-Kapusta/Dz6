#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	system("chcp 1251");
	float x;
	setlocale(LC_CTYPE, "RUS");
	printf("������� ����� ����� �\n");
	scanf("%f", &x);
	if (x*x > x) {
		printf("������� %.5f\n���� ����� %5f\n������ ���������� %.5f", pow(x, 2), x, sqrt(x));
	}
	else
	{
		printf("������ ���������� %.5f\n���� ����� %5f\n������� %.5f", sqrt(x), x, pow(x, 2));
	}
}