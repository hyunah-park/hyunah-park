// 2017-06-07
// 사용자로부터 텍스트를 입력받아 테스트를 모두 대문자로 출력하는 프로그램을 작성하여보자.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c, a=1;

	printf("텍스트를 입력하시오: ");
		
	while ((c = getchar()) != EOF)
	{
		if(a==1)
		{
			printf("대문자 출력: ");
			a = 0;
		}
		if (islower(c))
			c = toupper(c);
		putchar(c);
	}
	
	return 0;
}
