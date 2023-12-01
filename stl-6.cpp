#include <iostream>
#include <string>
#include <list>

class Person{
private:
    std::string name;
    int age;
    int height;
public:
    Person(std::string n, int a, int h) : name(n), age(a), height(h) {}
    friend bool operator < (const Person& p1, const Person& p2){
        if (p1.age == p2.age) {
            return p1.height > p2.height;
        }
        return p1.age < p2.age;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    int getHeight() const {
        return height;
    }
};

int main()
{
    std::list<Person> list;
    list.push_back(Person("T", 20, 170));
    list.push_back(Person("B", 30, 160));
    list.push_back(Person("S", 40, 160));
    list.push_back(Person("A", 30, 170));
    list.push_back(Person("E", 20, 180));
    list.sort();
    for (const auto& person : list) {
        std::cout << person.getName() << " " << person.getAge() << " " << person.getHeight() << std::endl;
    }
    return 0;
}