#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string word;
    map<string, unsigned> word_count;
    while (cin >> word)
    {
        ++word_count[word];
    }

    for (const auto &m : word_count)
        cout << m.first << " : " << m.second << endl;
}
