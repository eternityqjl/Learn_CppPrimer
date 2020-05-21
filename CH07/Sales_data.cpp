#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;



// member functions
Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//nonmember functions & friend functions
//read fumction
std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    
    return is;
}

//print function
//print函数不会改变对象的内容，所以Sales_data参数设为const
std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

//add function
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum;
    sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main()
{
    Sales_data total;
    if(read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else {
        std::cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}