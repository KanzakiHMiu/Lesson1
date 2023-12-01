#include <iostream>
#include <set>

int main()
{
    //创建一个保存int数据的set
    std::set<int> s;

    //插入数据
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(40);

    //输出
    for (auto i : s){
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    //判断插入是否成功
    if (s.insert(30).second){
        std::cout << "插入成功" << std::endl;
    }
    else{
        std::cout << "插入失败" << std::endl;
    }
    for (auto i : s){
        std::cout << i << std::endl;
    }

    //查找 30
    if (s.find(30) != s.end()){
        std::cout << "找到30" << std::endl;
    }
    else{
        std::cout << "未找到" << std::endl;
    }

    //统计 30 的个数
    std::cout << s.count(30) << std::endl;

    //将 30 改为 35
    s.erase(30);
    s.insert(35);
    for (auto i : s){
        std::cout << i << std::endl;
    }

    return 0;
}
