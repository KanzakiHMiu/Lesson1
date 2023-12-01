#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    // 创建一个保存数据的set
    set<int> s;
    // 向set中添加数据
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    for (auto i : s)
    {
        cout << i << endl;
    }
    // 再次插入30
    s.insert(30);
    s.find(30);
    if (s.find(30) != s.end())
        cout << 30 << endl;
    else
        cout << "not found" << endl;
    cout << s.count(30) << endl;
    s.erase(30);
    s.insert(35);
    for (auto i : s)
    {
        cout << i << endl;
    }
    return 0;
}