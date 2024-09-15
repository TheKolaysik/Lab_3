#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D1 2.54
#define D2 2.32166


int input_num() {
	int dym;
	float result1, result2;
	scanf("%d", &dym);
	result1 = D1 * dym;
	result2 = D2 * dym;
	printf("%d англ. дюймов - это %.1f см\n", dym, result1);
	printf("%d исп. дюймов - это %.1f см\n", dym, result2);
}

void main() {
	setlocale(LC_ALL, "RUS");
	input_num();
	system("pause");

}