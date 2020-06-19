#include <iostream>
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

double print_total(std::ostream &os, const Quote& item, size_t n);

int main()
{
    Quote q("AAA", 10);
    Bulk_quote bq("BBB", 20, 20, 0.3);
    Limit_quote lq("CCC", 30, 30, 0.6);

    Quote &r1 = q;
    r1.debug();
    r1 = bq;
    r1.debug();
    r1 = lq;
    r1.debug();

    Quote *r2 = &q;
    r2->debug();
    r2 = &bq;
    r2->debug();
    r2 = &lq;
    r2->debug();
    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN: " << item.isbn() << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
