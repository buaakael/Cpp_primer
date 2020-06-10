#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    string s = "ab2c3d7R4E6";
    string num = "0123456789";

    string::size_type pos = 0;
    while ((pos = s.find_first_of(num, pos)) != string::npos)
    {
        cout << "在第" << pos + 1 << "位置找到数字" << s[pos] << endl;
        ++pos;
    }
    pos = 0;
    while ((pos = s.find_first_not_of(num, pos)) != string::npos)
    {
        cout << "在第" << pos + 1 << "位置找到字母" << s[pos] << endl;
        ++pos;
    }
}
