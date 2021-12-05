#include <iostream>

using namespace std;

int main() {
	int t,d;

	cin>>t; // number of test-cases

	for (int i=0; i<t; i++) {
		cin>>d;

		if (d == 0 || d%2 == 0) {
			cout<<d<<" is even"<<endl;
		} else {
			cout<<d<<" is odd"<<endl;
		}
	}
}