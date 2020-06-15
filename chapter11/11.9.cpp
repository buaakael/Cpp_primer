#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    map<string, list<size_t>> word_Line;
    word_Line["hello"].push_back(1);
    word_Line["hello"].push_back(3);
    word_Line["hello"].push_back(5);
    word_Line["hello"].push_back(7);

    for (auto it = word_Line.begin(); it != word_Line.end(); ++it)
    {
        for (auto itl = (it->second).begin(); itl != (it->second).end(); ++itl)
            cout << it->first << "\t" << *itl << endl;
    }
}
