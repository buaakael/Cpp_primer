#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v;
    cout << "vector的size()为   " << v.size() << endl;
    cout << "vector的capacity()为   " << v.capacity() << endl;
    for (int i = 0; i < 1000; ++i)
    {
        v.push_back(i + 1);
        cout << "vector的size()为   " << v.size() << endl;
        cout << "vector的capacity()为   " << v.capacity() << endl;
    }
}
