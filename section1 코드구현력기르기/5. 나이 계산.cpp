#include <iostream>
#include <string>
using namespace std;

int main() {

	//ASCIIÄÚµå 0=48, a=65, A= 97
	string ssn;
	cin >> ssn;

	if (ssn[7] == '1' || ssn[7] == '2')
		cout << 2019-1900-((ssn[0]-48)*10+ssn[1]-48)+1;
	else
		cout << 2019-2000-((ssn[0]-48)*10+ssn[1]-48)+1;
		
	if(ssn[7]%2==1){
		cout << " M";
	}
	else
		cout << " W";

	return 0;
}