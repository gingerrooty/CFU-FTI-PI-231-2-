#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    string c = "";
    std::cin >> n;
    while (n > 0)
    {
        i = (n-1) % 26;
        c = char('A' + i) + c;
        n = (n-1)/26;
    }
    std::cout << c;
    return 0;
}