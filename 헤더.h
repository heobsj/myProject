#pragma once
#include <stdio.h>
#pragma warning(disable : 4996)

/** ���� ���
  */
void script_First() {
	printf("��Ģ���� ����\n");
}
void script_Last() {
	printf("��Ģ���� ��\n");
}

/** ��Ģ����
  */
int calc_Add(int a, int b) {
	return a + b;
}
int calc_Sub(int a, int b) {
	return a - b;
}
int calc_Mul(int a, int b) {
	return a * b;
}
double calc_Div(int a, int b) {
	return (double)a / b;
}

/** ���� �Է�
  */
int num_Input(int num) {
	printf("���� �Է�  :  ");
	scanf("%d", &num);
	//fflush(stdin); ������ ���������� �� ���� �۵�
	return num;
}

/** ������ �Է�
  */
int calc_Type(int num) {
	char s;
	printf("������ �Է�  :  ");
	scanf("%c", &s);
	switch (s) {
	case '+': num = 1; return num;
	case '-': num = 2; return num;
	case '*': num = 3; return num;
	case '/': num = 4; return num;
	default: return 0;
	}
}

/** ��� ���
  */
void num_Output(int num1, double num2, int type) {

	if (type = 4) {
		printf("���  :  %f\n", num2);
	}
	else {
		printf("���  :  %d\n", num1);
	}
}
