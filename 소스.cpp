#include <stdio.h>
#include "헤더.h"
#pragma warning(disable : 4996)

char (*calc_What)(char s);

int main() {

	int num = 0, num1=0, num2, type = 0;
	char ch = 0;

	script_First();
	
	num = num_Input(num);
	//printf("%d%d%d%d%d%d\n", num, num, num, num, num, num);

	getchar();
	
	type = calc_Type(type);
	//printf("%d%d%d%d%d%d\n", type, type, type, type, type, type);

	script_Last();

	//num_Input(num);
	/*
	printf("%d\n", num_Input(num));
	printf("%d%d%d%d%d%d\n", num,num,num,num,num,num);
	calc_Type();
	*/
	/*
	printf("숫자 입력   연산자 입력   숫자 입력 : \n");
	scanf("%d   %c   %d\n", &num1, &s, &num2);
	printf("%d   %c   %d\n", num1, s, num2);
	*/

	return 0;
}