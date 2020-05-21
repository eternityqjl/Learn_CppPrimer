#include <iostream>
#include <list>
#include <vector>

using std::list;
using std::vector;
using std::cout;
using std::endl;
int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec;
    list<int> lst;

    for (int i = 0; i != 11; i++)
    {
        vec.push_back(ia[i]);
        lst.push_back(ia[i]);
    }

    list<int>::iterator it = lst.begin();
    while(it != lst.end())
    {
        if (*it % 2)
            lst.erase(it);
        else
        {
            ++it;
        }
    }
    cout << "The numbers in lst(after deleting the odd ones) are: " << endl;
    for (auto i : lst)
        cout << i << " ";
    cout << endl;

    vector<int>::iterator it1 = vec.begin();
    while(it1 != vec.end())
    {
        if (!*it1 % 2)
            vec.erase(it1);
        else
        {
            ++it1;
        }
    }
    cout << "The numbers in vec(after deleting the even ones) are: " << endl;
    for (auto i : vec)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}