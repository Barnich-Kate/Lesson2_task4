#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	int N;
	cout << "Type the number N more than 0: ";
	cin >> N;
	while (N>=3) {
		N/=3;
		if (N == 1){
			cout << "True"<< endl;
		} else {
			cout << "False" << endl;
		}
	}
}
