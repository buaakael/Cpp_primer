#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream infile("10.29.txt");
    vector<string> v;
    istream_iterator<string> in_iter(infile) , eof;
    while (in_iter != eof)
    {
        v.push_back(*in_iter++);
    }
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    infile.close();
}
