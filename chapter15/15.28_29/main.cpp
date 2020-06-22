#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "quote.h"
#include "disc_quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

double print_total(std::ostream &os, const Quote& item, size_t n);

int main()
{
    std::vector<Quote> v;
    v.push_back(Bulk_quote("book", 10, 10, 0.3));
    v.push_back(Bulk_quote("book2", 20, 10, 0.5));
    for (const auto &b : v)
        std::cout << b.net_price(20) << std::endl;

    std::cout << "\n\n\n\n" << std::endl;

    std::vector<std::shared_ptr<Quote>> pv;
    pv.push_back(std::make_shared<Bulk_quote>("book", 10, 10, 0.3));
    pv.push_back(std::make_shared<Bulk_quote>("book2", 20, 10, 0.5));
    for (auto p : pv)
        std::cout << p->net_price(20) << std::endl;

    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN: " << item.isbn() << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
