#include <iostream>
#include <cmath>

int main() {
    for (double x = 0.5; std::int16_t(100*x) <= 100; x += 0.05) {
        int i = 1;
        double s = 0;
        double a = 1;
        while (std::abs(a) >= 0.0001) {
            a = std::pow(-1, i + 1) * std::pow(x, 2 * i + 1) / (4 * std::pow(i, 2) - 1);
            s += a;
            i++;
        }
        std::cout << x << ' ' << s << std::endl;
    }
}
