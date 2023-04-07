#include <iostream>
#include <string>

using namespace std;

int main() {
	string name[5];
	
	for (int i = 0; i < 5; i++) {
		cout << "이름>>";
		getline(cin, name[i]);
	}
	string max_name = name[0];
	for (int i = 0; i < 5; i++) {
		if (name[i] > max_name) {
			max_name = name[i];
		}
	}

	cout << "사전에서 가장 뒤에 나오는 문자열은 " << max_name << endl;
}