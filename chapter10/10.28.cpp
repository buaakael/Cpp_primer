#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<typename T>
void print(list<T> l)
{
    for (auto it = l.cbegin(); it != l.cend(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l1, l2, l3;
    copy(v.cbegin(), v.cend(), inserter(l1, l1.begin()));
    print(l1);
    copy(v.cbegin(), v.cend(), back_inserter(l2));
    print(l2);
    copy(v.cbegin(), v.cend(), front_inserter(l3));
    print(l3);
}
