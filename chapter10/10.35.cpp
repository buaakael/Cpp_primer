#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto it = v.cend(); it != v.cbegin(); --it)
        cout << *(it - 1) << " ";
    cout << endl;
}
