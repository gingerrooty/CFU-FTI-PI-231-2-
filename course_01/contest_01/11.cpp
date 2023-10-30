#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    double a;
    double b;
    double c;
    std::cin >> a >> b >> c;
    if (abs(a-b) < abs(a-c)) {
        std::cout << "B " << abs(a-b);
    } else {
        std::cout << "C " << abs(a-c);
    }
    return 0;
}