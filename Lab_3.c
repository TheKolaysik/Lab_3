#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int input_num() {
	int num1, num2;
	puts("������� �����");
	scanf("%d", &num1);
	puts("������� ����� �");
	scanf("%d", &num2);
	puts("������� ����� �");
	printf("�����: %i\n", num2 + num1);
	printf("��������: %i\n", num2 - num1);
	printf("�������: %i\n", num2 % num1);
	printf("������������: %i\n", num2 * num1);

}

void main() {
	setlocale(LC_ALL, "RUS");
	input_num();

}