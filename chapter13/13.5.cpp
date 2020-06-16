class HashPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& HP) : *ps(new string(*HP.ps), i(HP.i) { }
private:
    std::string *ps;
    int i;
};
