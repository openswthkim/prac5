/***************************************************************/
/*             HW#3 : 클래스와 객체의 기본                     */
/*  작성자 : 김태형                    날짜 : 2023년 4월 06일  */
/*                                                             */
/* 문제 정의 :  너비와 높이로 면적을 계산하는 rectangle 클래스 */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Rectangle{ // 클래스 Rectangle 선언
public: // 다른 클래스나 객체에서 접근이 가능한 접근 지정자 선언
	int width; // 넓이 변수 선언
	int height; // 높이 변수 선언
	int getArea() { // 넓이와 높이의 곱을 반환해주는 함수 선언
		return width * height;
	}
};

int main() {
	Rectangle rect; // 클래스에 객체 생성
	rect.width = 3; // 객체의 넓이에 3 대입
	rect.height = 5; // 객체의 높이에 5 대입
	cout << "사각형의 면적은 " << rect.getArea() << endl; // 사각형 면적 출력
}