#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x;
	setlocale(LC_CTYPE, "RUS");
	printf("������� ����� ����� �\n");
	scanf("%d", &x);
	printf("������� %.f\n���� ����� %d\n������ ���������� %.f", pow(x, 2), x, sqrt(x));

}