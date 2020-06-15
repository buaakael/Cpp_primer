#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

void print(multimap<string, string> &m)
{
    for (auto it = m.cbegin(); it != m.cend(); ++it)
        cout << it->first << "\t" << it->second << endl;
}

void print(map<string, multiset<string>> &m)
{
    for (const auto &l : m)
        for (const auto &s : l.second)
            cout << l.first << "\t" << s << endl;
}

int main(int argc, char* argv[])
{
    multimap<string, string> library;
    library.insert(make_pair("Li", "ccc"));
    library.insert(make_pair("Li", "eee"));
    library.insert(make_pair("Wang", "hello"));
    library.insert(make_pair("Li", "aaa"));
    library.insert(make_pair("Li", "ddd"));
    library.insert(make_pair("Wang", "yohoooo"));
    library.insert(make_pair("Li", "bbb"));
    library.insert(make_pair("Li", "fff"));
    library.insert(make_pair("Li", "hhh"));
    library.insert(make_pair("Li", "ggg"));
    library.insert(make_pair("Wang", "world"));

    print(library);
    cout << endl;

    map<string, multiset<string>> order_library;
    for (const auto &l : library)
    {
        order_library[l.first].insert(l.second);
    }
    print(order_library);
}
