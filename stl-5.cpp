#include <iostream>
#include <list>

int josephus(int m, int n){
    std::list<int> p;
    for(int i = 1; i <= m; i++){
        p.push_back(i);
    }

    auto it = p.begin();
    while (p.size() > 1){
        for (int count = 1; count < n; count++){
            ++it;
            if (it == p.end()){
                it = p.begin();
            }
        }

        it = p.erase(it);
        if (it == p.end()){
            it = p.begin();
        }
    }
    return *p.begin();
}

int main()
{
    int m, n;
    while(1){
        std::cin >> m >> n;
        if (!m && !n){
            break;
        }
        std::cout << josephus(m, n) << std::endl;
    }
    return 0;
}