# 2017-04-12
# 키와 몸무게를 입력받아 BMI 지수를 계산해 주는 프로그램을 작성합니다.
# BMI 지수가 나타내는 의미도 표시해 줍니다.

#include <stdio.h>
int main(void)
{
	float weight, height, result;

	printf("몸무게를 입력하십시오(kg): ");
	scanf_s("%f", &weight);
	printf("키를 입력하십시오(m): ");
	scanf_s("%f", &height);

	result = weight / (height * height);
	printf("%f / (%f * %f)\n", weight, height, height);
	printf("체질량 지수는 %f 입니다.\n", result);

	if (35 <= result)
		printf("고도 비만 입니다.");
	else if (30 <= result)
		printf("중등도 비만 (2단계 비만) 입니다.");
	else if (25 <= result)
		printf("경도 비만 (1단계 비만) 입니다.");
	else if (23 <= result)
		printf("과체중 입니다.");
	else if (18.5 <= result)
		printf("정상 입니다.");
	else
		printf("저체중 입니다.");

	return 0;
}
