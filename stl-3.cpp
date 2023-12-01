#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    //输入
    char c;
    while(std::cin.get(c) && c != '\n'){
        if (c != ' '){
            int x = c - '0';
            v1.push_back(x);
        }
    }
    std::vector<int> v2;
    //计算相邻两数的和
    for (int i = 0; i + 1 < v1.size(); i += 2){
        v2.push_back(v1[i] + v1[i + 1]);
    }
    //输出
    for (int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << " ";
    }
    getchar();
    return 0;
}