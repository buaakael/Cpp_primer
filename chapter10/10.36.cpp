#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    list<int> l = {1, 2, 3, 4, 5, 0, 6, 7, 8, 9, 10, 0, 11, 12, 13, 0, 14, 15};
    auto it = find(l.crbegin(), l.crend(), 0);
    cout << *it << endl;
    cout << *(++it) << endl;
}
