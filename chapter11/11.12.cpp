#include <iostream>
#include <vector>
#include <string>
//#include <unility>  std命名空间中声明了pair和make_pair，所以不包含此头文件也可以

using namespace std;

int main(int argc, char* argv[])
{
    string str;
    int i;
    vector<pair<string, int>> v;
    while (cin >> str >> i)
    {
        v.push_back(make_pair(str, i));
    }

    for (auto it = v.cbegin(); it != v.cend(); ++it)
    {
        cout << (*it).first << "\t" << (*it).second << endl;
    }
}
