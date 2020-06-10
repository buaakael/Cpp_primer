#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    vector<string> v;
    cout << "vector的size()为   " << v.size() << endl;
    cout << "vector的capacity()为   " << v.capacity() << endl;
    v.reserve(1024);
    string word = "hello world";
    for (int i = 0; i < 256; ++i)
        v.push_back(word);
    cout << "vector的size()为   " << v.size() << endl;
    cout << "vector的capacity()为   " << v.capacity() << endl;
    v.resize(v.size() + v.size() / 2);
    cout << "vector的size()为   " << v.size() << endl;
    cout << "vector的capacity()为   " << v.capacity() << endl;
}
