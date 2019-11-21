# 2017-03-21
# 달의 중력은 지구의 약 17%라고 한다. 몸무게를 입력받아 달에서의 몸무게로 변환하는 프로그램을 작성하여 보자.

#include <stdio.h>

int main(void)
{
	int weight;		// 몸무게
	int moon;		// 달에서의 몸무게

	printf("몸무게를 입력하십시오: ");
	scanf_s("%d", &weight);

	moon = 0.17 * weight;

	printf("달에서의 몸무게는 %d kg 입니다.", moon);

	return 0;
}
