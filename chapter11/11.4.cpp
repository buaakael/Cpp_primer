#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    int (*f)(int) = ispunct;
    string word;
    map<string, unsigned> word_count;
    while (cin >> word)
    {
        for (auto &s : word)
            s = tolower(s);
        word.erase(remove_if(word.begin(), word.end(), f), word.end());
        ++word_count[word];
    }

    for (const auto &m : word_count)
        cout << m.first << " : " << m.second << endl;
}
