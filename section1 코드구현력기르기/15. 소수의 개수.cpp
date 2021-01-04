#include <iostream>
using namespace std;

int cnt[200001];
int main() {

	//���ǿ����� n�� ����� �ִ��� �˻��Ҷ� ��Ʈ^1/2 ������ ��� �˻縦 ���ش�.
	//ex)36=6*6 ���� �̷�� ������� ���� �Ѻκ��� 36^1/2�� �Ѿ�� �ʴ´�.

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