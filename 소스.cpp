#include <stdio.h>
#include "헤더.h"
#pragma warning(disable : 4996)

int (*calculate)(int num1, int num2);

int main() {

	int num = 0, num1 = 0, num2 = 0, type = 0;
	char ch = 0;

	script_First();
	
	num1 = num_Input(num1);
	//printf("%d%d%d%d%d%d\n", num1, num1, num1, num1, num1, num1);

	getchar();
	
	type = calc_Type(type);
	//printf("%d%d%d%d%d%d\n", type, type, type, type, type, type);

	getchar();

	num2 = num_Input(num2);
	//printf("%d%d%d%d%d%d\n", num2, num2, num2, num2, num2, num2);
	
	//calculate = calc_Add; num = calculate(num1, num2);
	
	switch (type) {
	case 1: calculate = calc_Add; num = calculate(num1, num2);  break;
	case 2: calculate = calc_Sub; num = calculate(num1, num2);  break;
	case 3: calculate = calc_Mul; num = calculate(num1, num2);  break;
	case 4: calculate = calc_Div; num = calculate(num1, num2);  break;
	default: return 0;
	}
	
	printf("결과  :  %d\n", num);
	
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