#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    fstream file;
    file.open("9.49.txt");
    string str;
    if (file.is_open())
        file >> str;
    cout << "原始字符串为： " << str << endl;
    //abcdefghijklmnopqrstuvwxyz
    file.close();
    string s = "acemnorsuvwxz";

    cout << "string::npos = " << string::npos << endl;

    unsigned long long pos1 = 0;
    unsigned long long pos2 = 0; 
    unsigned long long length = 0;
    unsigned long long pos3 = 0;
    while ((pos1 = str.find_first_of(s, pos1)) != string::npos)
    {
        pos2 = pos1;
        if ((pos2 = str.find_first_not_of(s, pos2)) != string::npos)
        {
            if (pos2 - pos1 >= length)
            {
                length = pos2 - pos1;
                pos3 = pos1;
            }
        }
        else
        {
            break;
        }
        cout << pos1 << " " << pos2 << " " << pos3 << endl;
        ++pos1;
    }
    string s_long = str.substr(pos3, length);

    cout << "最长不出头串为： " << s_long << endl;
}
