#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n, k;
	int sum, max = 0;
	cin >> n >> k;

	vector<int> N(n);

	for (int i = 0; i < n; i++)
		cin >> N[i];

	for (int j = 0; j < k; j++) {
		max += N[j];
	}

	sum = max;
	for (int i = k; i < n; i++) {
		sum = sum + N[i] - N[i - k];
		if (sum > max)
			max = sum;
	}

	cout << max;

	return 0;
}
