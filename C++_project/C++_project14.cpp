/*
2017-09-22
cstring을 사용하여 문자열을 하나 입력받고 문자열의 부분 문자열을 출력하는 프로그램을 작성하라.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char dst[6];
  char src[6];

  cout << "문자열 입력>>";
  cin >> src;

  for (int i = 1; i < 6; i++) {
    strncpy_s(dst, src, i);
    cout << dst << endl;
  }
}
