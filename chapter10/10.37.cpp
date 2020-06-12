#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> l;
    copy(v.crbegin() + 3, v.crend() - 2, back_inserter(l));
    for (auto i : l)
        cout << i << " ";
    cout << endl;
}
