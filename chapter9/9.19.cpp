#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    string str;
    list<string> l;
    while (cin >> str)
    {
        l.push_back(str);
    }

    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
