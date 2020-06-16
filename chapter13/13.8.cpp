class HashPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& HP) : *ps(new string(*HP.ps)), i(HP.i) { }
    HasPtr& operator= (const HasPtr& HP)
    {
        string *p = new string(*HP.ps);
        delete ps;//先清空下ps，防止其指向别的什么鬼，导致内存泄漏
        ps = p;
        i = HP.i;
        return *this;
    }
private:
    std::string *ps;
    int i;
};
