class HashPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& HP) : ps(new string(*HP.ps)), i(HP.i) { }
    HasPtr& operator=(const HasPtr& HP)
    {
        string *p = new string(*HP.ps);
        delete ps;
        ps = p;
        i = HP.i;
        return *this;
    }
    ~HasPtr()
    {
        delete ps;
    }
private:
    std::string *ps;
    int i;
};
