#include <iostream>
#include <list>
#include <deque>

using std::list;
using std::deque;
using std::cout;
using std::endl;

int main()
{
    list<int> lst{2, 3, 5, 1, 4, 6, 7, 8, 9};
    deque<int> dq1;
    deque<int> dq2;

    for (auto i : lst)
    {
        if (i % 2 == 0)
            dq1.push_back(i);
        else
        {
            dq2.push_back(i);
        }
    }

    cout << "The even numbers: " << endl;
    for (auto i : dq1)
        cout << i << " ";
    cout << endl;

    cout << "The odd numbers: " << endl;
    for (auto i : dq2)
        cout << i << " ";
    cout << endl;

    int num1 = dq1.size();
    int num2 = dq2.size();

    cout << "The number of even: " << num1 << endl;
    cout << "The number of odd: " << num2 << endl;

    system("pause");
    return 0;
}