#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    list<int> l1{1, 2, 3, 4, 5};
    vector<int> v1{6, 7, 8, 9, 10};

    vector<double> v2(l1.begin(), l1.end());
    vector<double> v3(v1.begin(), v1.end());

    for (vector<double>::const_iterator it = v2.begin(); it != v2.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<double>::const_iterator it = v3.begin(); it != v3.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
