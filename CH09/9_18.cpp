#include <iostream>
#include <string>
#include <deque>

using std::deque;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    deque<string> lst;
    string word;

    while (cin >> word)
        lst.push_back(word);
    
    for (auto iter = lst.cbegin(); iter != lst.end(); ++iter)
        cout << *iter <<endl;

    system("pause");
    return 0;
}
