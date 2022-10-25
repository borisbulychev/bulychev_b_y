#include <iostream>
#include <cmath>

int main() {
    int t, n, a = 0;
    std::cin >> t;
    for (int i(0); i < t; i++) {
        std::cin >> n;
        int s = 0;
        /*int arr[] { 0 };*/
        for (int j(0); j < n; j++) {
            std::cin >> a;
            /*int* arr(new int(log2(a)));*/
            s += int(log2(a));
        }
        int c = n - s;
        while (c != 0) {

        }
    }
}