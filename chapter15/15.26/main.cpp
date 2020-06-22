#include <iostream>
#include <string>

#include "quote.h"
#include "disc_quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

double print_total(std::ostream &os, const Quote& item, size_t n);

int main()
{
    Bulk_quote bq1;
    Bulk_quote bq2("ss", 2, 12, 0.3);
    bq1 = bq2;
    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN: " << item.isbn() << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
