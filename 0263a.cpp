#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n,i,k,x,f = 0;
	for (i = 1; i <= 5; i += 1) {
		for (k = 1; k <= 5; k += 1) {
			cin >> n;
			if (n == 1) {
				x= abs(3 - i) + abs(3 - k);
				f = 1;
				break;
			}
		if (f == 1) {
			break;
		}
		}
	}
	cout << x;
}
