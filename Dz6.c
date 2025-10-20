#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	system("chcp 1251");
	float x;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите целое число Х\n");
	scanf("%f", &x);
	if (x*x > x) {
		printf("Квадрат %.5f\nСамо число %5f\nКорень квадратный %.5f", pow(x, 2), x, sqrt(x));
	}
	else
	{
		printf("Корень квадратный %.5f\nСамо число %5f\nКвадрат %.5f", sqrt(x), x, pow(x, 2));
	}
}