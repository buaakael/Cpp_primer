#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> v;
    vector<int> v2;
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, " ");
    copy(in, eof, back_inserter(v));
    sort(v.begin(), v.end());
    unique_copy(v.begin(), v.end(), back_inserter(v2));
    copy(v2.cbegin(), v2.cend(), out);
    cout << endl;
}
