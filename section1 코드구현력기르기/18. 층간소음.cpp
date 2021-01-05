#include <iostream>
using namespace std;

int arr[100];
int main() {

	int n, m;
	cin >> n >> m;

	int maxCnt = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > m) {
			cnt++;
		}
		else {
			if (cnt > maxCnt)
				maxCnt = cnt;
			cnt = 0;
		}
	}
	if (cnt > maxCnt)
		maxCnt = cnt;

	if (maxCnt == 0)
		cout << -1;
	else
		cout << maxCnt;

	return 0;
}
