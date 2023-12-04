#include <iostream>
#include <list>

int main()
{
    std::list<std::string> l;
    int N;
    std::cin >> N;
    std::string cmd;
    for (int i = 0; i < N; i++){
        std::cin >> cmd;
        if (cmd == "in"){
            std::string name;
            std::cin >> name;
            l.push_back(name);
        }
        else if (cmd == "out"){
            if (!l.empty()){
                l.pop_front();
            }
        }
        else if (cmd == "q"){
            if (l.empty()){
                std::cout << "NULL" << std::endl;
            }
            else {
                std::cout << l.front() << std::endl;
            }
        }

    }
    return 0;
}
