#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include "disc_quote.h"

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& b, double p, size_t q, double disc) : Disc_quote(b, p, q, disc) { }
    Bulk_quote(const Bulk_quote &bq) : Disc_quote(bq)
    {
        std::cout << "Bulk_quote : copy constructor" << std::endl;
    }
    Bulk_quote& operator=(const Bulk_quote &rhs)
    {
        Disc_quote::operator = (rhs);
        std::cout << "Bulk_quote : copy = () " << std::endl;
    }
    
    double net_price(size_t n) const override;
    void debug() const override;

};

#endif
