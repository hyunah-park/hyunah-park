/*
2017-09-22
다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라.

[다음]
#include <stdio.h>
int main() {
  int k, n=0;
  int sum=0;
  printf("끝 수를 입력하세요>>");
  scanf("%d", &n);
  for(k=1; k<=n; k++) {
    sum += k;
   }
   printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum);
   return 0;
}

*/

#include <iostream>
using namespace std;

int main() {
  cout << "끝 수를 입력하세요>>";

  int k;
  cin >> k;

  int sum = 0;

  for (int i = 1; i <= k; i++) {

    sum += i;

  }
  cout << 1 << "에서 " << k << "까지의 합은 " << sum << "입니다.\n";
}
