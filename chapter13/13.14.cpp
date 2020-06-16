#include <iostream>
using namespace std;

class numbered
{
public:
    numbered()
    {
        val = unique++;
    }
    static int unique;
    int val;
};

int numbered::unique = 10;

void f(numbered s)
{
    cout << s.val << endl;
}

int main(int argc, char* argv[])
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
}
