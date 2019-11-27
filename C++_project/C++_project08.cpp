/*
2017-09-22
배열을 사용하여 소수점을 가지는 5개의 실수를 입력받아 제일 큰 수를 화면에 출력하라.
*/

#include <iostream>
using namespace std;

int main() {
  cout << 5 << " 개의 실수를 입력하라>>";

  double num[5];

  for (int i = 0; i < 5; i++) {
    cin >> num[i];
  }

  double max = num[0];

  for (int i = 1; i < 5; i++) {
    if (max < num[i]) {
      max = num[i];
    }
  }
  cout << "제일 큰 수 = " << max << endl;
}
