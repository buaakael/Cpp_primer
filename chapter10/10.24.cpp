#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool func(const string &str, const int &i)
{
    return i > str.size();
}

int main(int argc, char* argv[])
{
    string str = "abcdefg";
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = find_if(v.cbegin(), v.cend(), bind(func, str, _1));
    cout << *it << endl;
}
