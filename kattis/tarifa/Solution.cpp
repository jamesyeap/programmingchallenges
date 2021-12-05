#include <iostream>

using namespace std;

int main() {
	int x,n,u,r=0;

	cin>>x;
	cin>>n;

	for (int i=0; i<n; i++) {
		cin>>u; // how much data he used for this month

		r += (x-u);
	}

	cout<<r+x;
}