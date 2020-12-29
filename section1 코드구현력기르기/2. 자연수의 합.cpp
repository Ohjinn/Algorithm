#include <iostream>
using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int sum = n;
	cout << n;
	for(int i=n+1; i<m+1; i++){
		cout << " + " << i;
		sum+=i;
	}
	cout << " = " << sum;
	
	return 0;
}
