#include <iostream>

using namespace std;

int main()
{
	int n, k ,f,t= 0;
	int m = -10 ^ 9;
	cin >> n >> k;
	for (int i(0); n > i; i++) {
		cin >> f >> t;
		if (t <= k) {
			m = max(m, f);
		}
		else {
			m = max(m, f - (t - k));
		}
	}
	cout << m;
}
