#include <fstream>
#include <iostream>

using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;

#include "../CH07/entrustConstructor/ex_7_41.h"

int main(int argc, char **argv)
{
    ifstream input(argv[1]);

    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" <<endl;
    }

    return 0;
}