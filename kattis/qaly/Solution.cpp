#include <iostream>

using namespace std;

int main() {
	int p;
	double q,l,c,r=0;

	cin>>p; // get number of constant-periods

	for (int i=0; i<p; i++) {
		cin>>q; cin>>l;

		c = q*l;
		r += c;
	}

	cout<<r<<endl;
}