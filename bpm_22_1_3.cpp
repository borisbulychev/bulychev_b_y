#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::string a("aeuiyon");
    std::string s;
    while (std::cin >> s) {
        int f = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (a.find(s[i]) == -1) {
                if ((a.find(s[i + 1]) == -1)||(s[i+1]=='n')) {
                    f = 1;
                    break;
                }
            }
        }
        if ((f == 0)&&(a.find(s[s.size() - 1])!=-1)) {
            std::cout<<"right"<<std::endl;
        }
        else {
            std::cout << "wrong"<<std::endl;
        }
    }
}