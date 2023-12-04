#include <iostream>
#include <set>

class Person{
public:
    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    bool operator<(const Person& p1) const {
        if (age == p1.age)
            return name < p1.name;
        return age > p1.age;
    }
    void Show(){
        std::cout << name << " " << age << std::endl;
    }
private:
    std::string name;
    int age;
};

int main()
{
    std::set<Person> s;
    if (!s.insert(Person("A", 18)).second){
        std::cout << "插入失败" << std::endl;
    }
    for (auto i : s){
        i.Show();
    }
    std::cout << std::endl;

    if (!s.insert(Person("B", 20)).second){
        std::cout << "插入失败" << std::endl;
    }
    for (auto i : s){
        i.Show();
    }
    std::cout << std::endl;
    
    if (!s.insert(Person("C", 21)).second){
        std::cout << "插入失败" << std::endl;
    }
    for (auto i : s){
        i.Show();
    }
    std::cout << std::endl;

    
    if (!s.insert(Person("D", 18)).second){
        std::cout << "插入失败" << std::endl;
    }
    for (auto i : s){
        i.Show();
    }
    std::cout << std::endl;

    if (!s.insert(Person("D", 18)).second){
        std::cout << "插入失败" << std::endl;
    }
    for (auto i : s){
        i.Show();
    }
    std::cout << std::endl;
    return 0;
}
