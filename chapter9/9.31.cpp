#include <iostream>
#include <forward_list>
#include <list>
#include <vector>
using namespace std;

template <typename T>
void print(T &stl)
{
    for (auto it = stl.begin(); it != stl.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main(int argc, char* argv[])
{
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = vi.begin();
    while (it != vi.end())
    {
        if (*it % 2 == 1)
        {
            it = vi.insert(it, *it);
            it += 2;
        }
        else
        {
            it = vi.erase(it);
        }
    }
    print(vi);

    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it2 = li.begin();
    while (it2 != li.end())
    {
        if (*it2 % 2 == 1)
        {
            it2 = li.insert(it2, *it2);
            ++it2;
            ++it2;
        }
        else
        {
            it2 = li.erase(it2);
        }
    }
    print(li);

    forward_list<int> fi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto cur = fi.begin();
    auto pre = fi.before_begin();
    while (cur != fi.end())
    {
        if (*cur % 2 == 1)
        {
            cur = fi.insert_after(cur, *cur);
            pre = cur;
            ++cur;
        }
        else
        {
            cur = fi.erase_after(pre);
        }
    }
    print(fi);
}
