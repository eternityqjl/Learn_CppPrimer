#include <string>
#include <vector>
using std::vector;

bool find (vector<int>::const_iterator begin, vector<int>::const_iterator end, int i)
{
    while (begin != end)
    {
        if (*begin == i)
            return true;
        begin++;
    }
    return false;
}