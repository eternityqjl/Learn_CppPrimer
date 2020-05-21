#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string numbers("0123456789");
    string str("ab2c3d7R4E6");

    cout << "numeric characters: ";
    for (int pos = 0; (pos = str.find_first_of(numbers, pos)) != string::npos; ++pos)
    {
        cout << str[pos] << " ";
    }
    cout << endl;


    cout << "alphabetic characters: ";
    for (int pos = 0; (pos = str.find_first_not_of(numbers, pos)) != string::npos; ++pos)
    {
        cout << str[pos] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}