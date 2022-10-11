#include <iostream>

using namespace std;

int main() {
    int n, k , c= 0;
    int a = 10 ^ 100;
    int i = 0;
    cin >> n >> k;
    for (i = 0; i < n; i += 1) {
        cin >> c;
        if (k % c==0) {
            a = std::min(k/c, a);
        }
    }
    cout << a;
}
