#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v = {1, 2, 3, 4, 5};
    int var1 = v[0];
    int var2 = v.at(0);
    int var3 = v.front();
    int var4 = *(v.begin());

    cout << var1 << " " << var2 << " " << var3 << " " << var4 << endl;
}
