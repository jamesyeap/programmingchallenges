#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n; // read input
	bool first = true;

	while (n!=0) { // an input of zero means to terminate program
		if (!first) printf("\n");
    	first = false;
		bool solutionFound = false;

		for (int fghij=1234; fghij<=98765/n; fghij++) {
			int abcde = fghij * n;

			// bitwise-operand with length 10 used to track if a digit has been used
			//		[1,2,3,4,5,6,7,8,9,0]
			//		[0,0,0,0,0,0,0,0,0,X] <= X depends on value of fghij
			int used = fghij<10000; // if fghij is lesser than 10000, then it must contain a zero at the start (ie 9999 ===mustbe===> 09999)

			int tmp = abcde;
			while (tmp != 0) { used |= 1<<(tmp%10); tmp /= 10; } // for each digit present in abcde, mark it as present in "used" using OR operator
			tmp = fghij;
			while (tmp != 0) { used |= 1<<(tmp%10); tmp /= 10; } // for each digit present in fghij, mark it as present in "used" using OR operator

			// check if all digits have been used
			int allused = (1<<10)-1; // bitwise-operand representing [1,1,1,1,1,1,1,1,1,1,1]
			if (used == allused) {
				solutionFound = true;
				printf("%05d / %05d = %d\n", abcde, fghij, n);
			}
		}

		if (solutionFound == false) {
			printf("There are no solutions for %d.\n", n);
		}

		cin >> n; // read next-input
	}
}