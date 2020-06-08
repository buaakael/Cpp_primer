#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    string str;
    deque<string> d;
    while (cin >> str)
    {
        d.push_back(str);
    }

    for (auto it = d.begin(); it != d.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
