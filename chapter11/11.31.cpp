#include <iostream>
#include <string>
#include <map>

using namespace std;

void print(multimap<string, string> &m)
{
    for (auto it = m.cbegin(); it != m.cend(); ++it)
        cout << it->first << "\t" << it->second << endl;
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

    auto it = library.find("Li");
    auto count = library.count("Li");

    while (it != library.end() && count--)
    {
        if (it->second == "ddd")
        {
            library.erase(it);
            break;
        }
        else
        {
            ++it;
        }
    }
    print(library);
}
