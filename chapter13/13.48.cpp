#include "13.44.h"
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char text[] = "world";
    String s0;
    String s1("hello");
    String s2(s0);
    String s3 = s1;
    String s4(text);
    s2 = s1;

    vector<String> sv;
    sv.push_back(s0);
    sv.push_back(s1);
    sv.push_back(s2);
    sv.push_back(s3);
    sv.push_back(s4);

    for (const auto &s : sv)
        cout << s.c_str() << endl;
}
