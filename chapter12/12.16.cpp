#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<string> p1(new string("Hello World"));
    cout << *p1 << endl;
    unique_ptr<string> p2(p1);
}
