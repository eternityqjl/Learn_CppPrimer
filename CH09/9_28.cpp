#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void ist(forward_list<string> flst, string str1, string str2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();

    while (curr != flst.end())
    {
        if (*curr == str1)
        {
            flst.insert_after(curr, str2);
            return;
        }
        else
        {
            prev = curr;
            ++curr;
        }
    }

    flst.insert_after(prev, str2);
}

int main()
{
    forward_list<string> flst{"SQ", "QR", "NH", "CX", "EK", "BR", "CI"};
    string str1{"EK"};
    string str2{"MU"};
    ist(flst, str1, str2);

    for (auto i : flst)
        cout << i << " ";
    cout << endl;

    system("pause");
    return 0;
}