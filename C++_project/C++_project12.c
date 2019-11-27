/*
2017-09-22
cstring을 사용하여 한 라인에 ';'으로 5개의 이름을 구분하여 입력받아,
각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  cout << 5 << " 명의 이름을 ';'으로 구분하여 입력하세요\n>>";

  char name[100];
  char len[100];

  int i = 0;
  cin.getline(name, 100, ';');
  strcpy_s(len, name);

  cout << i + 1 << " : " << name << "\n";

  for (int i = 1; i < 5; i++) {
    cin.getline(name, 100, ';');
    cout << i + 1 << " : " << name << "\n";
    if (strlen(len) < strlen(name)) {
      strcpy_s(len, name);
    }
  }

  cout << "가장 긴 이름은 " << len << endl;
}
