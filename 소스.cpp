#include <stdio.h>
#include "���.h"
#pragma warning(disable : 4996)

int (*calculate)(int num1, int num2);
double (*dcalculate)(int num1, int num2);

int main() {

	int num = 0, num1 = 0, num2 = 0, type = 0;
	double dnum = 0;
	char ch = 0;

	/** ù ���
	  */
	script_First();
	
	/** num1 �Է�
	  */
	num1 = num_Input(num1);
	getchar();
	
	/** ������ �Է�
	  */
	type = calc_Type(type);
	getchar();

	/** num2 �Է�
	  */
	num2 = num_Input(num2);
	getchar();
	
	/** num1 ������ num2 ���
	  */
	switch (type) {
	case 1: calculate = calc_Add; num = calculate(num1, num2); break;
	case 2: calculate = calc_Sub; num = calculate(num1, num2); break;
	case 3: calculate = calc_Mul; num = calculate(num1, num2); break;
	case 4: dcalculate = calc_Div; dnum = dcalculate(num1, num2); break;
	default: return 0;
	}
	
	/** ��� ���
	  */
	num_Output(num, dnum, type);

	/** ������ ���
	  */
	script_Last();

	return 0;
}