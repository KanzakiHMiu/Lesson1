#include <iostream>
#include <vector>

int main()
{
    // std::vector<int> v(100);
    // for (int i = 0; i < v.size(); i++){
    //     std::cout << v[i] << std::endl;
    // }
    // std::vector<int>::const_iterator ii;
    // for (ii = v.begin(); ii != v.end(); ii++){
    //     std::cout << *ii << std::endl;
    // }

    // std::vector<int>::const_iterator ii;
    // for (ii = v.begin(); ii < v.end(); ii++){
    //     std::cout << *ii << std::endl;
    // }
    std::vector<int> v;
    //插入元素1, 2, 3, 4, 5
    for (int i = 0; i < 5; i++){
        v.push_back(i + 1);
    }
    //正序输出
    std::vector<int>::iterator ii;
    for (ii = v.begin(); ii != v.end(); ii++){
        std::cout << *ii << std::endl;
        }
        std::cout << std::endl;
    //反序输出
    for (ii = v.end() - 1; ii >= v.begin(); ii--){
        std::cout << *ii << std::endl;
    }
        std::cout << std::endl;
    //各元素 * 10
    for (ii = v.begin(); ii != v.end(); ii++){
        *ii *= 10;
    }
    for (ii = v.begin(); ii != v.end(); ii++){
        std::cout << *ii << std::endl;
        }
    getchar();


    return 0;
}