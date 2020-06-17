#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
    HasPtr& operator=(const HasPtr& p)
    {
        ++*p.use;
        if (--*use == 0)
        {
            std::cout << *ps << "赋值时引用计数归零，销毁该对象" << std::endl;
            delete ps;
            delete use;
        }
        ps = p.ps;
        i = p.i;
        use = p.use;
        return *this;
    }
    ~HasPtr()
    {
        std::cout << "析构函数调用" << std::endl;
        if (--*use == 0)
        {
            std::cout << *ps << "引用计数归零，销毁该对象" << std::endl;
            delete ps;
            delete use;
        }
    }
    void print()
    {
        std::cout << *ps << " " << *use << std::endl;
    }
private:
    std::string *ps;
    int i;
    std::size_t *use;
};

int main(int argc, char *argv[])
{
    HasPtr p1("AAA");
    p1.print();
    HasPtr p2("BBB");
    p2.print();
    HasPtr p3(p1);
    p3.print();
    p2 = p1;
    p2.print();
}
