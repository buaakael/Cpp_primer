#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    list<char *> l1 = {"Hello", "World", "!"};
    vector<string> v;
    v.assign(l1.begin(), l1.end());
    for (vector<string>::const_iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
