#pragma once
#include <stdio.h>
#pragma warning(disable : 4996)

/** ���� ���
  */


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
int calc_Div(int a, int b) {
	return (double)a / b;
}


void script_First() {
	printf("��Ģ���� ����\n");
}
void script_Last() {
	printf("��Ģ���� ��\n");
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
void num_Output(int num) {
	printf("���  :  %d\n", num);
}
