#include <iostream>
#include <vector>

int main()
{
    int a[5] = {1, 22, 31, 4, 57};
    std::vector<int> v(a, a + 5);
    //输出vector元素个数
    std::cout << v.size() << std::endl;
    std::cout << std::endl;

    //输出vector
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;

    //在第三个元素前插入13并输出
    v.insert(v.begin() + 2, 13);
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;

    //删除第三个元素并输出
    v.erase(v.begin() + 2);
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;

    //将vector的前4个元素插入到v2的第一个位置
    std::vector<int> v2(4, 100);
    v2.insert(v2.begin(), v.begin(), v.begin() + 4);
    for (int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << std::endl;
    }
    std::cout << std::endl;

    //删除v2的3~7个元素
    v2.erase(v2.begin() + 2, v2.begin() + 7);
    for (int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << std::endl;
    }
    return 0;
}