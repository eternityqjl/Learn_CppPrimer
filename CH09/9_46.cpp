#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string add_prefix_postfix(string name, string const& prefix, string const& postfix)
{
    name.insert(name.begin(), prefix.cbegin(), prefix.cend());
    return name.append(postfix);
}

int main()
{
    string name("Qiao");
    cout << add_prefix_postfix(name, "Mr ", ", Jr") << endl;

    system("pause");
    return 0;
}