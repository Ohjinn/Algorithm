#include <iostream>
#include <cmath>
using namespace std;

int cnt[6];
int main() {

	int n, i=0, sum=0;		 //i는 (자릿수-1)을 의미
	cin >> n;

	int tmp = n;
	tmp /= 10;
	while (tmp > 0) {
		cnt[i] =9 * pow(10,i)*(i+1);
		i++;
		tmp /= 10;
	}
	cnt[i] = (n - pow(10, i) + 1)*(i+1);
	
	for (int j = 0; j < i+1; j++)
		sum += cnt[j];

	cout << sum;

	return 0;
}