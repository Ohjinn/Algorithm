#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	//ASCIIÄÚµå 0=48, a=65, A= 97
	string str, result = {};
	int resultN = 0, measures = 0;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if ('0' <= str[i] && str[i] <= '9')
			result.push_back(str[i]);
	}

	if (!result.empty()) {
		resultN = atoi(result.c_str());
		cout << resultN << endl;
		for (int i = 1; i < resultN + 1; i++) {
			if (resultN % i == 0)
				measures++;
		}
		cout << measures;
	}

	return 0;
}