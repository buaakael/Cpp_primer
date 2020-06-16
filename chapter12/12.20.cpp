#include <iostream>
#include <fstream>
#include "12.19.h"

using namespace std;

int main(int argc, char* argv[])
{
    ifstream ifs("book.txt");
    StrBlob blob;
    string s;
    while (getline(ifs, s))
    {
        blob.push_back(s);
    }
    for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend; pbeg.incr())
        cout << pbeg.deref() << endl;
}
