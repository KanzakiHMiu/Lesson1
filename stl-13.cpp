#include <iostream>
#include <stack>
#include <string>

bool isPair(const std::string& s){
    int len = s.size();
    if (len % 2){
        return false;
    }
    std::stack<char> stack;
    for (char c : s){
        if (c == '(' || c == '[' || c == '{'){
            stack.push(c);
        }else {
            if (stack.empty()){
                return false;
            }

            char top = stack.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top =='{')){
                stack.pop();
            }else {
                return false;
            }
        }
    }
    return stack.empty();
}

int main()
{
    int T;
    std::cin >> T;
    while (T--){
        std::string s;
        std::cin >> s;
        if (isPair(s))
            std::cout << "Yes" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}
