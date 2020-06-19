#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "disc_quote.h"

class Limit_quote : public Disc_quote
{
public:
    Limit_quote() = default;
    Limit_quote(const std::string& b, double p, size_t max, double disc) : Disc_quote(b, p, max, disc) { }
    
    double net_price(size_t n) const override;
    void debug() const override;

};

#endif
