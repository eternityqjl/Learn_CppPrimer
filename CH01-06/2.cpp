#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item total;   //variable to reserve the next record
    if (std::cin >> total) {
        Sales_item trans;   //variable to reserve to sum
        //read and process the remaining transaction records
        while (std::cin >> trans) {
            //while processing the same book
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                //print the result of the previous book
                std::cout << total << std::endl;
                total = trans;
            }
        }
        //print the result of the last book
        std::cout << total << std::endl;
    } else {
        //no input
        std::cerr << "No data?" << std::endl;

        system("pause");
        return -1;
    }
    system("pause");
    return 0;
}