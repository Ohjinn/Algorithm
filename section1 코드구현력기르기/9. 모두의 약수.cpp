#include <iostream>
using namespace std;

int cnt[50001];
int main() {

	int n, i, j;
	cin >> n;
	for (i = 1; i < n + 1; i++) {
		for (j = i; j < n + 1; j += i)
			cnt[j]++;
	}

	for (i = 1; i < n + 1; i++)
		cout << cnt[i] << " ";

	return 0;
}