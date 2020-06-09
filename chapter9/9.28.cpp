#include <iostream>
#include <string>
#include <forward_list>
using namespace std;

void print(forward_list<string> fs)
{
    for (auto it = fs.begin(); it != fs.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

void func(forward_list<string> &fs, string str1, string str2)
{
    auto pre = fs.before_begin();
    auto cur = fs.begin();
    while (cur != fs.end())
    {
        if (*cur == str1)
        {
            cur = fs.insert_after(cur, str2);
            break;
        }
        else
        {
            pre = cur;
            ++cur;
        }
        if (cur == fs.end())
            fs.insert_after(pre, str2);
    }
    print(fs);
}

int main(int argc, char* argv[])
{
    forward_list<string> fs = {"aa", "bb", "cc", "ee", "ff"};
    string str1, str2;
    str1 = "cc";
    str2 = "dd";
    func(fs, str1, str2);
    str1 = "zz";
    func(fs, str1, str2);
}
