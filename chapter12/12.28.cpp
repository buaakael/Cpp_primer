#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
    vector<string> text;
    string line;
    ifstream in("12.28.txt");
    while (getline(in, line))
    {
        text.push_back(line);
    }

//    for (auto it = text.cbegin(); it != text.cend(); ++it)
//        cout << *it << endl;
    map<string, set<int>> result;

    string s;
    cout << "请输入查找的单词(输入q退出)" << endl;
    while ((cin >>s) && (s != "q"))
    {
        cout << "请输入查找的单词(输入q退出)" << endl;
        for (size_t i = 0; i < text.size(); ++i)
        {
            istringstream word(text[i]);
            string m;
            while (word >> m)
            {
                if (s == m)
                {
                    result[s].insert(i);
                    break;
                }
            }
        }
        cout << s << " occurs " << result[s].size() << " times " << endl;
        for (auto itm = result[s].cbegin(); itm != result[s].cend(); ++itm)
        {
            cout << "\tline " << *itm << " : " << text[*itm] << endl;
        }
    }
}
