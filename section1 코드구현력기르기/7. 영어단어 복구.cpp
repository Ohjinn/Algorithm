#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	//ascii코드 0=48, a=65, a= 97
	string str, result = {};
	getline(cin, str);

	//공백제거, 소문자화
	for (int i = 0; i < str.size(); i++) {
		if (isalpha(str[i]))
			if (isupper(str[i]))
				result.push_back(tolower(str[i]));
			else
				result.push_back(str[i]);
	}
	
	cout << result;

	return 0;
}