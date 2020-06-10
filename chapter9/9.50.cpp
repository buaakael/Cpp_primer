#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> v1 = {"10", "20", "30", "40"};
    int sum1 = 0;
    for ( string str : v1)
    {
        sum1 += stoi(str);
    }
    cout << sum1 << endl;

    vector<string> v2 = {"1.11", "2.22", "3.33", "4.44"};
    double sum2 = 0;
    for (string str : v2)
    {
        sum2 += stod(str);
    }
    cout << sum2 << endl;
}
