#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int input_num() {
	int num1, num2;
	puts("введите число");
	scanf("%d", &num1);
	puts("Введено число А");
	scanf("%d", &num2);
	puts("Введено число В");
	printf("Сумма: %i\n", num2 + num1);
	printf("Разность: %i\n", num2 - num1);
	printf("Остаток: %i\n", num2 % num1);
	printf("Произведение: %i\n", num2 * num1);

}

void main() {
	setlocale(LC_ALL, "RUS");
	input_num();

}