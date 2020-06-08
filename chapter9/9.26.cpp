#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(ia, ia + 11);
    list<int> l(ia, ia + 11);

    auto itv = v.begin();
    while (itv != v.end())
    {
        if (*itv % 2 == 0)
            itv = v.erase(itv);
        else
            ++itv;
    }

    auto itl = l.begin();
    while (itl != l.end())
    {
        if (*itl % 2 == 1)
            itl = l.erase(itl);
        else
            ++itl;
    }

    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
