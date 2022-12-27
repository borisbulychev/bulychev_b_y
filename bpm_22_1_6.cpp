#include <iostream>
#include <cmath>
int main() {
    int h, w, x, y = 0;
    std::cin >> h >> w >> x >> y;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (std::abs(x - j) > std::abs(y - i)) {
                std::cout << std::abs(x - j) << ' ';
            }
            else {
                std::cout << std::abs(y - i) << ' ';
            }
        }
        std::cout << std::endl;
    }
}