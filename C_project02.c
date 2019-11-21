// 2017-04-04
// 사용자로부터 x의 값을 실수로 입력받아서 다음과 같은 다항식의 값을 계산하는 프로그램을 작성하여 보자.
// [다음] 3x^3-7x^2+9

#include <stdio.h>
int main()
{
	double x, result;

	printf("x의 값을 입력하십시오: ");
	scanf_s("%lf", &x);

	result = 3*x*x*x - 7*x*x + 9;
	printf("다항식의 값은 %lf입니다. \n", result);
	return 0;
}
