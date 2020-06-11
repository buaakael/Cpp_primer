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

bool isShorterThan5(const string &s)
{
    return s.size() < 5;
}

void elimDups(vector<string> &words)
{
    stable_sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

int main(int argc, char *argv[])
{
    vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    print(v);
    elimDups(v);
    print(v);
    auto it = partition(v.begin(), v.end(), isShorterThan5);
    for (it; it != v.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
