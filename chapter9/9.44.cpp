#include <iostream>
#include <string>
using namespace std;

void func(string &s, string &oldVal, string &newVal)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s.substr(i, oldVal.size()) == oldVal)
        {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size();
        }
    }
}

int main(int argc, char* argv[])
{
    string s = "thoabcdtho";
    cout << s << endl;
    string oldVal = "tho";
    string newVal = "though";
    func(s, oldVal, newVal);
    cout << s << endl;
}
