#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
	
	//���� ��ȣ�� ������ cnt++���ְ� �ݴ� ��ȣ�� ������ cnt--���ش�.
	//cnt�� ������ �Ǹ� �ȵǰ� ���������� 0�̾�� �Ѵ�.

	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')
			cnt++;
		if (str[i] == ')') {
			cnt--;
			if (cnt < 0) {
				break;
			}
		}
	}

	if (cnt != 0)
		cout << "NO";
	else
		cout << "YES";

	return 0;
}