#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

int main()
{
    vector<char> v{'h', 'e', 'l', 'l', 'o'};
    string str(v.cbegin(), v.cend());\
}