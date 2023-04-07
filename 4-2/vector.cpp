/***************************************************************/
/*             HW#3 : 클래스와 객체의 기본                     */
/*  작성자 : 김태형                    날짜 : 2023년 4월 06일  */
/*                                                             */
/* 문제 정의 :   벡터를 입력받아 가장 나중에 나오는 이름 출력  */
/*                - - - - - - -                                */
/***************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector <string> str; // string vector 선언
	string name; // 문자열 변수 선언
	cout << "이름을 5개 입력하라" << endl; // 출력
	for (int i = 0; i < 5; i++) { // i=0 부터 i=4까지 반복한다
		cout << i+1 << ">>"; //  1부터 5까지 번호 출력
		getline(cin, name); // name을 입력받는다
		str.push_back(name); // 입력받은 문자열을 벡터에 저장한다
	}
	name = str.at(0); // 변수 name에 벡터의 첫 번째 원소를 대입한다
	for (int i = 0; i < str.size(); i++) { // i=0부터 벡터의 크기까지 반복한다
		if (name < str[i]) { // name이 str[i]보다 작으면 str[i]로 대체한다
			name = str[i];
		}
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name; // 출력
}