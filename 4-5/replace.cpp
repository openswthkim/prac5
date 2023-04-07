/***************************************************************/
/*             HW#3 : 클래스와 객체의 기본                     */
/*  작성자 : 김태형                    날짜 : 2023년 4월 06일  */
/*                                                             */
/* 문제 정의 :  문자열을 입력 받고 찾는 문자열을 대치할 문자열 */
/*              로 바꿔줌 - - - - - - -                        */
/***************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; // 문자열 s 선언
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl; // 출력
	getline(cin, s, '&');// 문자열을 입력받는다. &가 입력되면 종료한다
	cin.ignore(); // cin 버퍼에 남아있는 '\n' 제거
	
	string f; // 찾을 문자열 f 선언 
	string r; // 바꿀 문자열 r 선언

	cout << "find : "; // 출력
	getline(cin, f); // f를 입력받음
	cout << "replace: "; // 출력
	getline(cin, r); // r을 입력받음

	int change = 0; // 정수형 변수를 0으로 초기화
	while(1){ 
		int index = s.find(f, change); // s.find 함수를 사용하여 문자열 f를 찾고 검색 시작 위치를 change로 설정하여 index에 저장
		if (index == -1) // 문자열 s에 찾을 문자열이 없으면 -1을 반환하고 반복문 종료
			break;
		s.replace(index, f.length(), r); // s.replace 함수를 사용하여 찾은 문자열을 문자열 f의 길이만큼 바꿔준다
		change = index + r.length(); // 바꾸어진 마지막 위치를 기록하고 바꾼 문자열 다음부터 검색을 시작한다
	}
	cout << s << endl; // 문자열 s 출력

}