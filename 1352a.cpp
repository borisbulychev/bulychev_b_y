#include <iostream>

using namespace std;

int main() {
	int t ,i,n,k= 0;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> n;
		for (k=0; n / (10 ^ k) > 0; k++) {}
		cout << k;
		for (int j(1); j <= k; j++) {
			cout << n % (10 ^ j) - n % (10 ^ (j - 1));
		}
	}
}