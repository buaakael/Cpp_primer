#include <iostream>
#include <string>
using namespace std;

void func(string &name, string &prefix, string &suffix)
{
    name.insert(0, prefix);
    name.insert(name.size(), suffix);
}

int main(int argc, char* argv[])
{
    string name = "kael";
    cout << name << endl;
    string prefix = "Mr.";
    string suffix = "Jr.";
    func(name, prefix, suffix);
    cout << name << endl;
}
