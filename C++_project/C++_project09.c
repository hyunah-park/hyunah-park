/*
2017-09-22
<Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를 화면에 출력하라.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
cout << "문자들을 입력하라(100개 미만).\n";

char text[100];
cin.getline(text, 100, '\n');

char ch = 'x';

int count = 0;

for (int i = 0; i < 100; i++) {
if (text[i] == ch) {
count++;
}
}
cout << "x의 개수는 " << count << endl;
}
