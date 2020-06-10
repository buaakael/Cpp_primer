#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (const int i : v)
        cout << i << " ";
    cout << endl;
    int sum = accumulate(v.cbegin(), v.cend(), 0);
    cout << "vector中元素的和为 " << sum << endl;
}
