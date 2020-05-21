#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

auto sum_for_int (vector<string> const& v)
{
    int sum = 0;
    for (auto const& s : v)
        sum += stoi(s);
    
    return sum;
}

auto sum_for_float (vector<string> const& v)
{
    float sum = 0;
    for (auto const& s : v)
        sum += stof(s);

    return sum;
}

int main()
{
    const vector<string> vec{"23", "235", "127", "2346", "3451"};
    cout << sum_for_int(vec) << endl;
    cout << sum_for_float(vec) << endl;

    system("pause");
    return 0;
}


