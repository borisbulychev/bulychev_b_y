#include <iostream>;
#include <vector>;
#include <set>;
#include <algorithm>;

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int>s(n);
    std::set <int> l;
    for (int a : s) {
        int i = 0;
        std::cin >> i;
        a = i;
        l.insert(i);
    }
    reverse(s.begin(), s.end());
    std::vector<int>t(0);
    for (int i(0); t.size() < l.size(); i++) {
        if (std::find(t.begin(),t.end(),s[i])==t.end()) {
            t.push_back(s[i]);
        }
    }
    std::cout << t.back();
}