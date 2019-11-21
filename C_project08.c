// 2017-06-14
// 다음을 계산하는 재귀적인 프로그램을 작성하여보자.
// [ 다음 ] 1^3+2^3+3^3+...+n^3

#include <stdio.h>
#include <math.h>

int recursive(int n);

int main(void)
{
	int n;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &n);
	printf("%d\n", recursive(n));

	return 0;
}

int recursive(int n)
{
	if (n == 1)
		return 1;
	else
		return n*n*n + recursive(n - 1);
}
