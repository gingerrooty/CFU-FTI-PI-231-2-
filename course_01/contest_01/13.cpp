#include <iostream>

using namespace std;

int main() 
{
    int N;
    int i;
    int c = 0;
    int l = 1;
    int step = 1;
    int m = 2;
    std::cin >> N;
    for (i = 1; i <= N; i++) 
    {
        std::cout << i << " ";
        c++;
        if (c == l)
        {
            std::cout << "\n";
            l += step;
            c = 0;
        }
        if (l == m || l == 1)
        {
            step *=- 1;
        }
        if (l == m)
        {
            m++;
        }
        
    }
    return 0;
}