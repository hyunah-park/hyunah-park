// 2017-05-23
// 다음 표의 각 행의 합계, 각 열의 합계를 구하는 프로그램을 작성하여보자. 표는 2차원 배열을 이용하여 표현한다.
/*
[ 다음 ]
12  56  32  16  98
99  56  34  41  3
65  3 87  78  21
*/

#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
	int s[ROWS][COLS] = {
		{ 12, 56, 32, 16, 98 },
		{ 99, 56, 34, 41, 3 },
		{ 65, 3, 87, 78, 21 },
	};

	int row, col, total;

	for (row = 0; row < ROWS; row++)
	{
		total = 0;
		for (col = 0; col < COLS; col++)
			total += s[row][col];
		printf("%d행의 합계 = %d\n", row, total);
	}

	for (col = 0; col < COLS; col++)
	{
		total = 0;
		for (row = 0; row < ROWS; row++)
			total += s[row][col];
		printf("%d열의 합계 = %d\n", col, total);
	}

	return 0;
}
