#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int a,b,c,n;
	scanf("%d %d %d %d", &a, &b, &c, &n);

	if (a>=1 && b>=1 && c>=1 && a+b+c>=n && n>=3) { // n must be at least 3; else it won't be possible to include a problem of each type
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}