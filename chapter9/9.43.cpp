#include <iostream>
#include <string>
using namespace std;

void func(string &s, string &oldVal, string &newVal)
{
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (s.substr(it - s.begin(), oldVal.size()) == oldVal)
        {
            it = s.erase(it, it + oldVal.size());
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
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
