#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v;
    v.reserve(10);
    cout << "v.size() = " << v.size() << endl;
    cout << "v.capacity() = " << v.capacity() << endl;
    v.resize(10);
    cout << "v.size() = " << v.size() << endl;
    cout << "v.capacity() = " << v.capacity() << endl;
    fill_n(v.begin(), 10, 0);
    for (const int i : v)
        cout << i << " ";
    cout << endl;
}
