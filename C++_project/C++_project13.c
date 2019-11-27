/*
2017-09-22
cstring을 사용하여 이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  cout << "이름은?";

  char name[10];
  cin.getline(name, 10, '\n');

  cout << "주소는?";

  char address[100];
  cin.getline(address, 100, '\n');

  cout << "나이는?";

  int age;
  cin >> age;

  cout << name << ", " << address << ", " << age << "세\n";

}
