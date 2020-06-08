#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(int argc, char* argv[])
{
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d_odd;
    deque<int> d_even;
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        if ((*it) & 1 == 1)
            d_odd.push_back(*it);
        else
            d_even.push_back(*it);
    }

    for (auto it = d_odd.begin(); it != d_odd.end(); ++it)
        cout << *it << " ";
    cout << endl;
    for (auto it = d_even.begin(); it != d_even.end(); ++it)
        cout << *it << " ";
    cout << endl;
}
