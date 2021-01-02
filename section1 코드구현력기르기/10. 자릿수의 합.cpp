#include <iostream>
using namespace std;

int digit_sum(int x);

int cnt[100];
int num[100];

int main() {

	int n, max=-1, maxIndex=0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n; i++)
		cnt[i] = digit_sum(num[i]);

	for (int i = 0; i < n; i++) {
		if (cnt[i] > max) {
			maxIndex = i;
			max = cnt[i];
			
		}
		else if (cnt[i] == max) {
			if (num[maxIndex] <= num[i]) {
				maxIndex = i;
				max = cnt[i];
			}
		}
	}
	cout << num[maxIndex];

	return 0;
}

int digit_sum(int x) {

	//10으로 나누기한 나머지을 더하고 몫을 다음 반복문에 활용한다.
	//다음 반복문으로 넘어오는 수가 0이 될때까지 반복한다.
	int k, sum = 0;

	while (x > 0) {
		k = x % 10;
		x /= 10;
		sum += k;
	}

	return sum;
}