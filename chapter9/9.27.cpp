#include <iostream>
#include <forward_list>
using namespace std;


void print(forward_list<int> flst)
{
    for (auto it = flst.begin(); it != flst.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main(int argc, char* argv[])
{
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(flst);
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end())
    {
        if (*curr % 2 == 1)
            curr = flst.erase_after(prev);
        else
        {
            prev = curr;
            ++curr;
        }
    }
    print(flst);
}
