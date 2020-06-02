#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};

    array<int, 5> a1 = {11, 12, 13, 14, 15};
    array<int, 5> a2 = {16, 17, 18, 19, 20};

    vector<int>::iterator it1 = v1.begin();
    vector<int>::iterator it2 = v2.begin();
    array<int, 5>::iterator it3 = a1.begin();
    array<int, 5>::iterator it4 = a2.begin();
    cout << *it1 << " " << *it2 << " " << *it3 << " " << *it4 << endl;
    swap(v1, v2);
    swap(a1, a2);
    cout << *it1 << " " << *it2 << " " << *it3 << " " << *it4 << endl;
}
