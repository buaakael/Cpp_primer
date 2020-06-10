#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<string> v1 = {"aa", "bb", "cc"};
    vector<const char*> v2 = {"aa", "bb", "cc"};
    cout << "v1中的元素为" << endl;
    for (const string s : v1)
        cout << s << " ";
    cout << endl;
    cout << "v2中的元素为" << endl;
    for (const char* s : v2)
        cout << s << " ";
    cout << endl;
    bool res = equal(v1.cbegin(), v1.cend(), v2.cbegin());
    cout << "两个vector是否相等的结果为 " << res << endl;
}
