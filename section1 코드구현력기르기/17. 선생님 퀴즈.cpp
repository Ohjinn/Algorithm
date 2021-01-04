#include <iostream>
using namespace std;

int q[10];
int a[10];
int main() {

	int n; //ÇÐ»ý¼ö
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> q[i] >> a[i];
	}

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 1; j < q[i] + 1; j++)
			sum += j;

		if (sum != a[i])
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}