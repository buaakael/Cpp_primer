#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 5, 5};
    for (const int i : v)
        cout << i << " ";
    cout << endl;
    int res = count(v.cbegin(), v.cend(), 5);
    cout << res << endl;
}
