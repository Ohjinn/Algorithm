#include <iostream>
using namespace std;

int reverse(int x);
bool isPrime(int x);

int arr[100];
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		int tmp = reverse(arr[i]);
		if (isPrime(tmp))
			cout << tmp << " ";
	}
	
	return 0;
}

int reverse(int x) {

	int res = 0;
	while (x > 0) {
		int tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;
	}

	return res;
}

bool isPrime(int x) {

	//1은 소수가 아니다.
	if (x == 1) return false;

	bool isPrime = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = false;
			break;
		}
	}

	return isPrime;
}