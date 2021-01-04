#include <iostream>
using namespace std;

int cnt[200001];
int main() {

	//강의에서는 n의 약수가 있는지 검사할때 루트^1/2 까지만 약수 검사를 해준다.
	//ex)36=6*6 쌍을 이루는 약수들은 쌍의 한부분이 36^1/2를 넘어가지 않는다.

	int n;
	cin >> n;

	for (int i = 2; i < n + 1; i++) {
		for (int j = i*2; j < n + 1; j += i) {
			cnt[j]++;
		}
	}

	int sum = 0;
	for (int i = 2; i < n + 1; i++) {
		if (!(cnt[i] > 0))
			sum++;
	}

	cout << sum;

	return 0;
}