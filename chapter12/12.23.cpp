#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    char *concatenate_string = new char[strlen("hello ") + strlen("world") + 1]();
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world");
    cout << concatenate_string << endl;
    delete [] concatenate_string;

    string str1("hello "), str2("world");
    cout << str1 + str2 << endl;
}
