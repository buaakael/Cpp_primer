#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "quote.h"
#include "disc_quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"
#include "basket.h"

int main()
{
    Basket basket;

    basket.add_item(Bulk_quote("book1", 10, 10, 0.3));
    basket.add_item(Bulk_quote("book1", 10, 10, 0.3));
    basket.add_item(Bulk_quote("book1", 10, 10, 0.3));
    basket.add_item(Bulk_quote("book1", 10, 10, 0.3));
    basket.add_item(Bulk_quote("book1", 10, 10, 0.3));
    basket.add_item(Bulk_quote("book1", 10, 10, 0.3));
    basket.add_item(Bulk_quote("book2", 5, 20, 0.1));
    basket.add_item(Bulk_quote("book2", 5, 20, 0.1));
    basket.add_item(Bulk_quote("book2", 5, 20, 0.1));
    basket.add_item(Bulk_quote("book2", 5, 20, 0.1));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));
    basket.add_item(Quote("BOOK", 30));

    basket.total_receipt(std::cout);
    return 0;
}
