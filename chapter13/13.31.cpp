#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class HasPtr
{
    friend void swap(HasPtr&, HasPtr&);
    friend bool operator<(const HasPtr&, const HasPtr&);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i){ }
//    HasPtr& operator=(const HasPtr& p)
//    {
//        auto new_ps = new std::string(*p.ps);
//        delete ps;
//        ps = new_ps;
//        i = p.i;
//        return *this;
//    }
    HasPtr& operator=(HasPtr tmp)
    {
        this->swap(tmp);
        return *this;
    }
    ~HasPtr()
    {
//        std::cout << "析构函数调用" << std::endl;
        delete ps;
    }
    
    void swap(HasPtr &rhs)
    {
        using std::swap;
        swap(ps, rhs.ps);
        swap(i, rhs.i);
        std::cout << "swap成员函数调用" << std::endl;
    }

    void print() const
    {
        std::cout << *ps << " " << std::endl;
    }
private:
    std::string *ps;
    int i;
};

void swap(HasPtr& a, HasPtr& b)
{
    a.swap(b);
    std::cout << "自定义swap调用" << std::endl;
}

bool operator<(const HasPtr &a, const HasPtr &b)
{
//    std::cout << "operator<调用" << std::endl;
    return *a.ps < *b.ps;
}

int main(int argc, char *argv[])
{
    HasPtr p1("AAA");
    HasPtr p2("BBB");
    HasPtr p3("CCC");
    std::vector<HasPtr> v {p1, p2, p3};
    std::sort(v.begin(), v.end());
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        it->print();
}
