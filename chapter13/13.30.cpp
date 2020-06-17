#include <iostream>
#include <string>

class HasPtr
{
    friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i){ }
    HasPtr& operator=(const HasPtr& p)
    {
        auto new_ps = new std::string(*p.ps);
        delete ps;
        ps = new_ps;
        i = p.i;
        return *this;
    }
    ~HasPtr()
    {
        std::cout << "析构函数调用" << std::endl;
        delete ps;
    }
    void print()
    {
        std::cout << *ps << " " << std::endl;
    }
private:
    std::string *ps;
    int i;
};

inline void swap(HasPtr& a, HasPtr& b)
{
    using std::swap;
    swap(a.ps, b.ps);
    swap(a.i, b.i);
    std::cout << "自定义swap调用" << std::endl;
}

int main(int argc, char *argv[])
{
    HasPtr p1("AAA");
    p1.print();
    HasPtr p2("BBB");
    p2.print();
    swap(p1, p2);
    p1.print();
    p2.print();
}
