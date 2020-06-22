#include "quote.h"

void Quote::debug() const
{
    std::cout << "data member of this class" << std::endl;
    std::cout << "bookNo= " << this->bookNo << " " << "price = " << this->price << std::endl;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
    return ret;
}
