#include <iostream>
using namespace std;

class A
{
public:
    A(int m) : val(m)
    {
        cout << "默认构造函数" << endl;
    }
    A(const A& a) : val(a.val)
    {
        cout << "拷贝构造函数" << endl;
    }
    A& operator= (const A& a)
    {
        val = a.val;
        cout << "拷贝赋值运算符" << endl;
        return *this;
    }
    ~A()
    {
        cout << val << "的析构函数" << endl;
    }
private:
    int val;
};

int main(int argc, char* argv[])
{
    A a(10);
    A b(a);
    A c(20);
    b = c;
    A *d = new A(5);
    delete d;
}
