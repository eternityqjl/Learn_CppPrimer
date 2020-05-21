#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string text;
    cin >> text;
    for (decltype(text.size()) index = 0; index != text.size(); ++index)
    {
        text[index] = 'X';
    }
    cout << "The result is " << text << endl;
    
    system("pause");
    return 0;

}