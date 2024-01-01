#include <iostream>
#include <stack>

int main() {
    std::string s;
    std::stack<char> stack;
    bool True = true;
    while (True) {
        std::getline(std::cin, s);
        for (char i : s) {
            True = (i != '!');
            if (i == '(' || i == '{' || i == '[')
                stack.push(i);
            else if (i == ')' || i == '}' || i == ']') {
                if (stack.empty()) {
                    stack.push(i);
                    True = false;
                    break;
                } else if ((i == ')' && stack.top() == '(') || (i == '}' && stack.top() == '{') || (i == ']' && stack.top() == '[')) {
                    stack.pop();
                } else {
                    stack.push(i);
                    True = false;
                    break;
                }
            }
        }
    }
    if (stack.empty()) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}