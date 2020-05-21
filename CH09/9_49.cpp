#include <string>
#include <fstream>
#include <iostream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

int main()
{
    ifstream ifs("../CH09/letter.txt");
    if (!ifs)   return -1;

    string longest;
    auto update_with = [&longest](string const& curr)
    {
        if (string::npos == curr.find_first_not_of("aceimnorsuvwxz"))
            longest = longest.size() < curr.size() ? curr : longest;
    };
    for (string curr; ifs >> curr; update_with(curr));
    cout << longest << endl;

    system("pause");
    return 0;
}