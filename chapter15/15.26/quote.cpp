#include "quote.h"

void Quote::debug() const
{
    std::cout << "data member of this class" << std::endl;
    std::cout << "bookNo= " << this->bookNo << " " << "price = " << this->price << std::endl;
}
