#include "12.30.h"
using namespace std;

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    while (1)
    {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s)) << endl;
    }
}

int main(int argc, char* argv[])
{
    ifstream infile("12.28.txt");
    runQueries(infile);
}
