#include <iostream>
#include <string>

using namespace std;

int main() {
	string s,b;

	while (cin>>b) {
		s += (" " + b);
	}

	cout<<"Thank you, "<<s<<", and farewell!";
}