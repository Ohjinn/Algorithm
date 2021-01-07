#include <iostream>
using namespace std;

int a[10];
int b[10];
int main() {

	for (int i = 0; i < 10; i++)
		cin >> a[i];
	for (int i = 0; i < 10; i++)
		cin >> b[i];

	int aScore=0, bScore = 0;
	int lastWinner = -1;		//A=1, B=2

	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			aScore += 3;
			lastWinner = 1;
		}
		else if (a[i] < b[i]) {
			bScore += 3;
			lastWinner = 2;
		}
		else {
			aScore ++;
			bScore ++;
		}
	}

	cout << aScore << " " << bScore << endl;
	if (aScore > bScore)
		cout << "A";
	else if (aScore < bScore)
		cout << "B";
	else {
		if(lastWinner==1)
			cout << "A";
		else if(lastWinner==2)
			cout << "B";
		else
			cout << "D";

	}

	return 0;
}
