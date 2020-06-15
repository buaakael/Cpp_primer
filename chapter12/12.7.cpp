#include <iostream>
#include <vector>
#include <memory>

using namespace std;

void write(shared_ptr<vector<int>> p)
{
    int temp;
    while (cin >> temp)
    {
        p->push_back(temp);
    }
}

void print(shared_ptr<vector<int>> p)
{
    for (size_t i = 0; i < p->size(); ++i)
        cout << (*p)[i] << " ";
    cout << endl;
}

int main(int argc, char* argv[])
{
    shared_ptr<vector<int>> p = make_shared<vector<int>>();
    write(p);
    print(p);
}
