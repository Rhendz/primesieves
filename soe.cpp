/* --------------------------
/* Author : Ankush Patel
/* Github : github.com/rhendz
/* ------------------------*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Input an integer n > 1

int main() {
	int n = 0;

	while (n <= 1) {
		if (n <= 1) {
			cout << "Please enter a number greater than 1" << endl;
			cin >> n;
		} else {
			break;
		}
	}

	// Vector of bool is initialized to true
	// Size + 1 so the last digit is captured
	vector<bool> a(n+1, true);

	for (int i = 2; i < ceil(sqrt(n)); i++) {
		if (a[i]) {
			for (int j = i*i; j <= n; j += i) {
				a[j] = false;
			}
		}
	}

	for (int i = 2; i < a.size(); i++) {
		if (a[i]) {
			cout << i << endl;
		}
	}

	return 0;
}
