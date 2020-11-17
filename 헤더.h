#pragma once
#include <stdio.h>
#pragma warning(disable : 4996)

// 대사
void script_First() {
	printf("사칙연산 시작\n");
}
void script_Last() {
	printf("사칙연산 끝\n");
}

// 연산
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

// 숫자 입력 받기
int num_Input(int num) {
	printf("숫자 입력  :  ");
	scanf("%d", &num);
	//fflush(stdin); 집에서 구버전으로 할 때는 작동
	return num;
}

// 연산자 입력 받기
int calc_Type(int num) {
	char s;
	printf("연산자 입력  :  ");
	scanf("%c", &s);
	switch (s) {
	case '+': num = 1; return num;
	case '-': num = 2; return num;
	case '*': num = 3; return num;
	case '/': num = 4; return num;
	default: return 0;
	}
}

// 숫자 연산자 구조체
struct Input {
	int num;
	char type;
};
/*
int num_Input(int num1, char s, int num2) {
	printf("숫자 입력   연산자 입력   숫자 입력 :  ");
	scanf("%d   %c   %d", &num1, &s, &num2);
}
*/
/*
int num_Input(int num) {
	printf("숫자 입력  :  ");
	scanf("%d",&num);
	return num;
}
char calc_Type(char s) {
	printf("연산자 입력");
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