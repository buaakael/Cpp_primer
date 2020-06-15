#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void print(map<string, vector<string>> &family, vector<pair<string, string>> &birth)
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

    for (auto itb = birth.cbegin(); itb != birth.cend(); ++itb)
    {
        cout << itb->first << " " << itb->second << endl;
    }
}

int main(int argc, char* argv[])
{
    map<string, vector<string>> family;
    vector<pair<string, string>> birth;
    string surname;//姓氏
    string name;//名字
    string birthday;//生日
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
                    cout << "请输入家庭中孩子的生日" << endl;
                    cin >> birthday;
                    family[surname].push_back(name);
                    birth.push_back(make_pair(name, birthday));
                    break;
                }
            case '2' :
                {
                    cout << "请输入家庭姓氏" << endl;
                    cin >> surname;
                    cout << "请输入新添加的孩子的名字" << endl;
                    cin >> name;
                    cout << "请输入家庭中孩子的生日" << endl;
                    cin >> birthday;
                    family[surname].push_back(name);
                    birth.push_back(make_pair(name, birthday));
                    break;
                }
            case 'p' :
                {
                    print(family, birth);
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
