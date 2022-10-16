#include <iostream>

int main() {
    int w = 0;
    std::cin >> w;
    int n = w / 5;
    if (w % 5 != 0) {
        n += 1;
    }
    std::cout << n;
}
