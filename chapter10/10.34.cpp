#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto rit = v.crbegin(); rit != v.crend(); ++rit)
        cout << *rit << " ";
    cout << endl;
}
