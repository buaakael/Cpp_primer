#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
    list<string> l = {"aa", "bb", "cc", "dd", "ee", "dd", "ff", "dd"};
    for (const string s : l)
        cout << s << " ";
    cout << endl;
    int res = count(l.cbegin(), l.cend(), "dd");
    cout << res << endl;
}
