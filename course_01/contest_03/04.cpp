#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    set <string> Set1;
    for (int i = 0; i < n; i++) {
        string word;
        std::cin >> word;
        Set1.insert(word);
    }
    
    int m;
    std::cin >> m;
    set <string> Set2;
    for (int i = 0; i < m; i++) {
        string word;
        std::cin >> word;
        if (Set1.count(word) > 0) {
            Set2.insert(word);
        }
    }

    if (Set2.size() == 0) {
        std::cout << -1;
    } else {
        for (const string& word : Set2) 
            std::cout << word << " ";
    }
    return 0;
}