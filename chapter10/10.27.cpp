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
    vector<int> v = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9};
    list<int> l;
    unique_copy(v.cbegin(), v.cend(), back_inserter(l));
    print(l);
}
