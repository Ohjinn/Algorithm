#include <iostream>
using namespace std;

int a[100];
int b[100];
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++) {
		if (a[i] == b[i])
			cout << "D" << endl;
		else if ((a[i] == 1 && b[i] == 2) || (a[i] == 2 && b[i] == 3) || (a[i] == 3 && b[i] == 1))
			cout << "B" << endl;
		else
			cout << "A" << endl;
	}

	return 0;
}
