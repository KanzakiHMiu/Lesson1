#include <iostream>
#include <list>
#include <iterator>

class MyLess{
public:
    bool operator()(const int &a, const int &b){
        if ((a % 10) < (b % 10)){
            return true;
        }
        else
            return false;
    }
};

bool MyCompare(int a, int b){
    if ((a % 10) < (b % 10)){
            return false;
        }
        else
            return true;
}

template<typename T, typename C>
T MyMax(T a[], int n, C c){
    T max = a[0];
    for (int i = 1; i < n; i++){
        if (c(a[i], max)){
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int a[] = {35, 7, 13, 19, 12};
    std::cout << MyMax(a, 5, MyLess()) << std::endl;
    return 0;
}