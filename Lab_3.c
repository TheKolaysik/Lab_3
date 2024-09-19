#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int input_num() {
	int a, b;

	scanf("%d", &a);
	scanf("%d", &b);
	system("pause");
	puts("-------------------------");
	puts("| a + b\t| a * b\t| a - b\t|");
	puts("-------------------------");
	printf("| %d + %d\t| %d * %d\t| %d - %d\t|\n", a, b, a, b, a, b);
	puts("-------------------------");
	printf("| %d\t| %d\t| %d\t|", a + b, a * b, a - b);
	



}

void main() {
	setlocale(LC_ALL, "RUS");
	input_num();

}