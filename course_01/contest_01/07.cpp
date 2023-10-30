#include <iostream>

using namespace std;

int main() 
{
    float a;
    float b;
    std::cin >> a >> b;
    if (a > b) {
        std::cout << a;
    } else {
        std::cout << b;
    }
    return 0;
}