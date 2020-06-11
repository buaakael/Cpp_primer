#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 10, b = 20;
    auto f = [a](const int b){return a + b;};
    cout << a << " + " << b << " = " << f(b) << endl;
}
