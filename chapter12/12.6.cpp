#include <iostream>
#include <vector>

using namespace std;

void write(vector<int> *p)
{
    int temp;
    while (cin >> temp)
    {
        p->push_back(temp);
    }
}

void print(vector<int> *p)
{
    for (size_t i = 0; i < p->size(); ++i)
        cout << (*p)[i] << " ";
    cout << endl;
}

int main(int argc, char* argv[])
{
    auto *p = new vector<int>;
    write(p);
    print(p);
    delete p;
}
