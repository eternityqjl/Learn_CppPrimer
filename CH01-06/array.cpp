#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned scores[11] = {};   //initialize elements in array as 0s
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade / 10];
        for (auto i : scores)
            cout << i << "\n";
    }
    
}