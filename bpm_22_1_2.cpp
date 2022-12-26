#include <iostream>
#include <cmath>

int main() {
    int k = 0;
    double x, y = 0;
    for (int i = 1; std::cin >> x >> y; i++) {
        if ((y >= -(std::pow(x, 2)) + 2) && (std::pow(y, 2) + std::pow(x, 2) <= 4)) {
            k += 1;
        }
        std::cout << std::round(100 * k / i);
    }
}
