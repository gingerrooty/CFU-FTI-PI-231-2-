#include <iostream>
#include <map>
#include <list>
using namespace std;

int main() {
    int a, v;
    string k;
    map <string, int> mp;
    
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        std::cin >> k;
        size_t s = k.find(';');
        mp[k.substr(0, s)] = stoi(k.substr(s + 1));
    }
    
    int b;
    list <string> list;
    std::cin >> b;
    for (int i = 0; i < b; i++) {
        std::cin >> k;
        list.push_back(k);
    }

    for (const auto& i : list)
        std::cout << mp[i] << " ";
    return 0;
}