#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

template <typename T>
void print(list<T> l)
{
    for (auto it = l.cbegin(); it != l.cend(); ++it)
        cout << *it << " ";
    cout << endl;
}

void elimDups(list<string> &words)
{
    words.sort();

    words.unique();
}

int main(int argc, char *argv[])
{
    list<string> l = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    print(l);
    elimDups(l);
    print(l);
}
