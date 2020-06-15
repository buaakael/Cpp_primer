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
        //++word_count[word];
        auto ret = word_count.insert(make_pair(word, 1));
        if (!ret.second)
            ++ret.first->second;
    }

    for (const auto &m : word_count)
        cout << m.first << " : " << m.second << endl;
}
