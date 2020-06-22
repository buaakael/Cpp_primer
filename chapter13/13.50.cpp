#include "13.49.String.h"
#include <iostream>

String baz()
{
    String ret("world");
    return ret;
}

int main(int argc, char* argv[])
{
    String s1("Hello");
    String s2(s1);
    String s5(baz());
    std::cout << s5.c_str() << std::endl;
}
