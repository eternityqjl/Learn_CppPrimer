#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void replacement(string &s, string const& oldVal, string const& newVal)
{
    for (auto cur = s.begin(); cur <= s.end() - oldVal.size(); )
    {
        if (oldVal == string{cur, cur + oldVal.size()})
        {
            cur = s.erase(cur, cur + oldVal.size()),
            cur = s.insert(cur, newVal.begin(), newVal.end()),
            cur += newVal.size();
        }
        else
        {
            ++cur;
        }
    }
}

int main()
{
    string s{"To drive straight thru is a foolish, tho courageous act."};
    replacement(s, "tho", "though");
    replacement(s, "thru", "through");
    cout << s << endl;

    return 0;
}
