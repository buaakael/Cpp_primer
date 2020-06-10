#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    vector<char> v = {'H', 'e', 'l', 'l', 'o'};
    string str(v.begin(), v.end());
    cout << str << endl;
}
