#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t = 0; 
    string s;
    map<string, int> map;
    vector<string> vector; 
    
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> s;
        map[s]++;
    }

    for (const auto& i : map) {
        if (t < i.second) {
            t = i.second;
            vector.clear();
            vector.push_back(i.first);
        } else if (t == i.second) {
            vector.push_back(i.first);
        }
    }

    sort(vector.begin(), vector.end());

    for (const string& i : vector)
        std::cout << i << " ";

    return 0;
}