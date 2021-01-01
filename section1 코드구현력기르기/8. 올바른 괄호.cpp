#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
	
	//여는 괄호를 만나면 cnt++해주고 닫는 괄호를 만나면 cnt--해준다.
	//cnt는 음수가 되면 안되고 마지막에는 0이어야 한다.

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