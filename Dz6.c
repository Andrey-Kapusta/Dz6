#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите целое число Х\n");
	scanf("%d", &x);
	printf("Квадрат %.f\nСамо число %d\nКорень квадратный %.f", pow(x, 2), x, sqrt(x));

}