#include <iostream>
using namespace std;

int cnt[10];
int main() {

	string n;
	int max=-1, maxIndex = 0;

	cin >> n;
	for (int i = 0; i < n.size(); i++) {
		cnt[n[i] - '0']++;
	}
	for (int i = 0; i < 10; i++) {
		if (cnt[i] >= max) {
			max = cnt[i];
			maxIndex = i;
		}
	}

	cout << maxIndex;

	return 0;
}