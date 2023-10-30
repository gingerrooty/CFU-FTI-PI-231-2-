#include <iostream>
#include <string>
#include <algorithm>
 
int main()
{
    std::string a;
    std::string b;
    std::cin >> a >> b;
    a = a.substr(a.find_first_not_of('0'));
    b = b.substr(b.find_first_not_of('0'));
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    if (a == b) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
 
    return 0;
}