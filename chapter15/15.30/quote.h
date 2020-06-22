#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>

class Quote
{
    friend bool operator !=(const Quote& lhs, const Quote& rhs);
public:
    Quote() { std::cout << "default constructing Quote" << std::endl; }
    Quote(const std::string &b, double p) : bookNo(b), price(p) { std::cout << "Quote : constructor taking 2 parameters" << std::endl; }
    Quote(const Quote& q) : bookNo(q.bookNo), price(q.price) { std::cout << "Quote : copy constructing" << std::endl; }
    Quote& operator = (const Quote &rhs)
    {
        if (*this != rhs)
        {
            bookNo = rhs.bookNo;
            price = rhs.price;
        }
        std::cout << "Quote : copy = ()" << std::endl;
    }

    virtual Quote* clone() const & { return new Quote(*this); }
    virtual Quote* clone() && { return new Quote(std::move(*this)); }

    std::string isbn() const
    {
        return bookNo;
    }
    virtual double net_price(std::size_t n) const
    {
        return n * price;
    }
    virtual ~Quote()
    {
        std::cout << "destructing Quote" << std::endl;
    }

    virtual void debug() const;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

bool inline operator != (const Quote &lhs, const Quote &rhs)
{
    return lhs.bookNo != rhs.bookNo && lhs.price != rhs.price;
}

double print_total(std::ostream &os, const Quote &item, size_t n);

#endif
