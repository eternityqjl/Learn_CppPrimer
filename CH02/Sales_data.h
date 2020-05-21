#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned int units_sold;
    double price;
    double revenue;
};
#endif
