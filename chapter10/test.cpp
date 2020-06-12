#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders;

int func(int a, int b)
{
    return a - b;
}

int main(int argc, char* argv[])
{
    auto g = bind(func, _2, _1);
    cout << 10 << " - " << 5 << " = " << func(10, 5) << endl;
    cout << 5 << " - " << 10 << " = " << g(10, 5) << endl;
}
