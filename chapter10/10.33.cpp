#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream infile("in.txt");
    ofstream outfile1("out1.txt");
    ofstream outfile2("out2.txt");
    istream_iterator<int> in(infile), eof;
    ostream_iterator<int> out1(outfile1, " ");
    ostream_iterator<int> out2(outfile2, "\n");
    vector<int> v;
    while (in != eof)
    {
        v.push_back(*in++);
    }

    for (auto it = v.cbegin(); it != v.cend(); ++it)
    {
        if (*it % 2 == 1)
            *out1++ = *it;
        if (*it % 2 == 0)
            *out2++ = *it;
    }
    infile.close();
    outfile1.close();
    outfile2.close();
}
