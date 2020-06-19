#include "limit_quote.h"

double Limit_quote::net_price(size_t n) const
{
    if (n > quantity)
        return quantity * price * (1 - discount) + (n - quantity) * price;
    else
        return n * (1 - discount) * price;
}

void Limit_quote::debug() const
{
    Quote::debug();
    std::cout << "max_qty= " << this->quantity << " " << "discount= " << this->discount << std::endl;
}
