#include <iostream>
#include <string>

using namespace std;

int main() {
	string name[5];
	
	for (int i = 0; i < 5; i++) {
		cout << "�̸�>>";
		getline(cin, name[i]);
	}
	string max_name = name[0];
	for (int i = 0; i < 5; i++) {
		if (name[i] > max_name) {
			max_name = name[i];
		}
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << max_name << endl;
}