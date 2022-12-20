#include <iostream>
#include <cmath>

int main() {
    float s = 0;
    float a = 0;
    int i = 1;
    for (double x = 0.1; x <= 1; x += 0.05) {
        a = std::pow(-1, i + 1) * std::pow(x, 2 * i + 1) / (4 * std::pow(i, 2) - 1);
        if (std::abs(a) >= 0.0001) {
            s += a;
            std::cout << x << ' ' << s << std::endl;
        }
        else {
            break;
        }
    }
}