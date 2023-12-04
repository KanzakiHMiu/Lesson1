#include <iostream>
#include <map>

class Student{
public:
    std::string name;
    int id;
    Student(std::string name, int id){
        this->name = name;
        this->id = id;
    }
};

int main()
{
    std::multimap<int, Student> m;
    std::string comand;
    while(std::cin >> comand){
        if (comand == "End"){
            break;
        }
        else if (comand == "Add"){
            std::string name;
            int id, score;
            std::cin >> name >> id >> score;
            m.insert({score, Student(name, id)});
        }
        else if (comand == "Query"){
            int score;
            std::cin >> score;
            int max_score;
            for (auto i : m){
                if (i.first < score){
                    max_score = 0;
                    if (i.first > max_score){
                        max_score = i.first;
                    }
                }
            }
            for (auto i : m){
                if (i.first == max_score){
                    std::cout << i.second.name << " " << i.second.id << " " << i.first << std::endl;
                }
            }
        }
    }
}
