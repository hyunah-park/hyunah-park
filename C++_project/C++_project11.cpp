/*
2017-09-22
cstring을 사용하여 "yes"가 입력될 때까지 종료하지 않는 프로그램을 작성하라.
사용자로부터의 입력은 cin.getline() 함수를 사용하라.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
  cout << "종료하고싶으면 yes를 입력하세요>>";

  while (true) {

    char text[11];
    cin.getline(text, 11, '\n');
  
    if (strcmp(text, "yes") == 0) {
      cout << "종료합니다..." << endl;
      break;
    }
    else
      cout << "종료하고싶으면 yes를 입력하세요>>";
  }
}
