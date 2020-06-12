#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v;
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, " ");
    copy(in, eof, back_inserter(v));
    sort(v.begin(), v.end());
    copy(v.cbegin(), v.cend(), out);
    cout << endl;
}
