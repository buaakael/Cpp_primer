#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v;
    fill_n(back_inserter(v), 10, 0);
    for (const int i : v)
        cout << i << " ";
    cout << endl;
}
