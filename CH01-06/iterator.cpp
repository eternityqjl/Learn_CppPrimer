#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

//use the iterator to achieve the binary search

int main()
{
    int sought;
    cin >> sought;

    vector<int> text(10);
    //text must be ordered
    //beg and end represent the range we search
    int m;
    int i = 0;
    while (cin >> m && i != 10)
    {
        text.push_back(m);
        i++;
    }
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
            end = mid;
        else
        {
            beg = mid + 1;
        }
        mid = beg + (end - beg) / 2;
    }

    
}