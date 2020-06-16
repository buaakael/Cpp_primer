#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char* argv[])
{
    unique_ptr<int[]> u(new int [10]);
    for (int i = 0; i < 10; ++i)
        u[i] = i;

    for (int i = 0; i < 10; ++i)
        cout << i << " ";
    cout << endl;
    u.release();
}
