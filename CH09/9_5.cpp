#include <string>
#include <vector>
using std::vector;

vector<int>::const_iterator find (vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
    while (begin != end)
    {
        if (*begin == i)
            return begin;
        begin++;
    }
    return end;
}