
#include <iostream>
#include <string>
#include <set>
#include <array>
#include <map>
#include <vector>

int main() {
	int n, k = 0;
	std::cin >> n >> k;
	int p2, p1 = 0;
	std::cin >> p1 >> p2;
	std::vector<int> power={p1,p2};
	for (int i(0); i < (n - 2);i++) {
		int pi = 0;
		std::cin >> pi;
		power.push_back(pi);
	}
	int j = 0;
	while (j<k) {
		if (power[0] > power[1]) {
			j++;
			power.push_back(erase(1));
		}
	}
}
