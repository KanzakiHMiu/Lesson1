#include <iostream>
#include <list>

template<typename T>
class Paixu{
public:
    bool operator()(const T &p1, const T &p2){
        return (p1 % 10) < (p2 % 10);
    }
};


int main()
{
    int a[5] = {5, 21, 14, 2, 3};
    std::list<int> list(a, a + 5);
    list.sort(Paixu<int>());
    for (auto i : list){
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    list.sort(std::greater<int>());
    for (auto i : list){
        std::cout << i << std::endl;
    } 
    return 0;
}