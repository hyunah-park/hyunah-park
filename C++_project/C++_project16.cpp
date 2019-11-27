/*
2017-09-22
다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라.

[다음]
#include <stdio.h>
int sum();  // 함수 원형 선언

int main() {
  int n=0;
  printf("끝 수를 입력하세요>>");
  scanf("%d", &n);
  printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum(1, n));
  return 0;
}

int sum(int a, int b) {
  int k, res=0;
  for(k=a; k<=b; k++) {
    res += k;
  }
  return res;
}

*/

#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
  int n=0;

  cout << "끝 수를 입력하세요>>";
  cin >> n;
  cout << 1 << "에서 " << n << "까지의 합은 " << sum(1,n) << "입니다.\n";

}

int sum(int a, int b) {
  int k, res = 0;
  for (k = a; k <= b; k++) {
    res += k;
  }
  return res;
}
