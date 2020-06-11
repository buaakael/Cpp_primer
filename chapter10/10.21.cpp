#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int i = 10;
    auto f = [&i] ()->bool { if (i > 0) {--i;return false;}else return true; };
    while (!f())
        cout << i << " ";
    cout << endl;
}
