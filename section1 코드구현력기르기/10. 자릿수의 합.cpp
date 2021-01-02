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

	//10���� �������� �������� ���ϰ� ���� ���� �ݺ����� Ȱ���Ѵ�.
	//���� �ݺ������� �Ѿ���� ���� 0�� �ɶ����� �ݺ��Ѵ�.
	int k, sum = 0;

	while (x > 0) {
		k = x % 10;
		x /= 10;
		sum += k;
	}

	return sum;
}