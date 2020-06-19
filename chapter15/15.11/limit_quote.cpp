#include "limit_quote.h"

double Limit_quote::net_price(size_t n) const
{
    if (n > max_qty)
        return max_qty * price * (1 - discount) + (n - max_qty) * price;
    else
        return n * (1 - discount) * price;
}

void Limit_quote::debug() const
{
    Quote::debug();
    std::cout << "max_qty= " << this->max_qty << " " << "discount= " << this->discount << std::endl;
}
