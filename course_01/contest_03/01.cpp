#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int a;
    std::cin >> a;
    std::vector<int> v1(a);
    for (int i = 0; i < a; i++) {
        std::cin >> v1[i];
    }
    
    int b;
    std::cin >> b;
    std::vector<int> v2(b);
    for (int c = 0; c < b; c++) {
         std::cin >> v2[c];
    }
    
    v1.insert(v1.end(), v2.begin(), v2.end());
    sort(v1.begin(), v1.end());
    
    for (const auto x : v1)
        std::cout << x << " ";

    return 0;
}