#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void print(vector<T> v)
{
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        cout << *it << " ";
    cout << endl;
}

void elimDups(vector<string> &words)
{
    stable_sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = stable_partition(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
    for_each(words.begin(), wc, [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main(int argc, char *argv[])
{
    vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    print(v);
    biggies(v, 5);
}
