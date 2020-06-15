#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void print(multimap<string, vector<string>> &family)
{
    cout << endl;
    if (family.size() == 0)
        cout << "当前存储为空，请添加数据" << endl;
    for (auto it = family.cbegin(); it != family.cend(); ++it)
    {
        cout << "姓氏为 " << it->first << " 的家庭下的孩子有" << endl;
        for (auto itv = it->second.cbegin(); itv != it->second.cend(); ++itv)
        {
            cout << *itv << " ";
        }
        cout << endl;
    }
}

int main(int argc, char* argv[])
{
    multimap<string, vector<string>> family;
    string surname;//姓氏
    string name;//名字
    vector<string> v;
    while (1)
    {
        char choice;
        cout << "添加家庭请按1" << endl;
        cout << "往家庭添加孩子请按2" << endl;
        cout << "打印现有情况请按p" << endl;
        cout << "退出系统请按q" << endl;
        cin >> choice;
        switch(choice)
        {
            case '1' :
                {
                    cout << "请输入家庭姓氏" << endl;
                    cin >> surname;
                    cout << "请输入家庭中孩子的名字" << endl;
                    cin >> name;
                    v.push_back(name);
                    family.insert(make_pair(surname, v));
                    v.clear();
                    break;
                }
            case '2' :
                {
                    cout << "请输入家庭姓氏" << endl;
                    cin >> surname;
                    cout << "请输入新添加的孩子的名字" << endl;
                    cin >> name;
                    auto it = family.find(surname);
                    it->second.push_back(name);
                    break;
                }
            case 'p' :
                {
                    print(family);
                    break;
                }
            case 'q' :
                {
                    break;
                }
            default :
                {
                    cout << "输入不符合规范，请重新输入" << endl;
                    break;
                }
        }
        if (choice == 'q')
            break;
        cout << endl;
    }
    cout << "程序结束" << endl;
}
