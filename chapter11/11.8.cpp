#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    vector<string> v;
    string word;
    while (cin >> word)
    {
        if (find(v.cbegin(), v.cend(), word) != v.cend())
        {
            cout << "不可插入重复元素" << endl;
        }
        else
        {
            v.push_back(word);
        }
    }
    for (const auto &str : v)
        cout << str << " ";
    cout << endl;
}
