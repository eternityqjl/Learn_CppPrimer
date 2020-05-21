#include <fstream>
#include <iostream>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::cerr;

#include "../CH07/entrustConstructor/ex_7_41.h"

int main(int argc, char **argv)
{
    ifstream input(argv[1]);
    ofstream output(argv[2]);   //P8_8 change to "ofstream output(argv[2], ofstream::app);

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
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }
    else
    {
        cerr << "No data?!" <<endl;
    }

    return 0;
}