#pragma once
#include <stdio.h>
#pragma warning(disable : 4996)

// ���
void script_First() {
	printf("��Ģ���� ����\n");
}
void script_Last() {
	printf("��Ģ���� ��\n");
}

// ����
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
	return a / b;
}

// ���� �Է� �ޱ�
int num_Input(int num) {
	printf("���� �Է�  :  ");
	scanf("%d", &num);
	//fflush(stdin); ������ ���������� �� ���� �۵�
	return num;
}

// ������ �Է� �ޱ�
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

// ���� ������ ����ü
struct Input {
	int num;
	char type;
};
/*
int num_Input(int num1, char s, int num2) {
	printf("���� �Է�   ������ �Է�   ���� �Է� :  ");
	scanf("%d   %c   %d", &num1, &s, &num2);
}
*/
/*
int num_Input(int num) {
	printf("���� �Է�  :  ");
	scanf("%d",&num);
	return num;
}
char calc_Type(char s) {
	printf("������ �Է�");
	scanf("%c", &s);
	return s;
}
*/
/*
struct student {
	int age;
	double grade[3];
	char* name;
};
*/