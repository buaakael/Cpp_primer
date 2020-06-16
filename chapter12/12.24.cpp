#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[])
{
    char *p = new char[2]();
    strcpy(p, "hello world");
    cout << p << endl;
    delete p;
}
