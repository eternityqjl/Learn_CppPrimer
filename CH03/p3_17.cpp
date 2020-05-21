#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string text;
    vector<string> v1;
    int i = 0;

    while(cin >> text)
    {
        v1.push_back(text);
        i++;
    }

    int j = 0;
    while (j < i)
    {
        int k = 0;
        while(k < v1[i].size())
        {
            v1[j][k] = toupper(v1[j][k]);
            k++;
        }
        j++;
    }

    for (auto m : v1)
    {
        cout << m << "\n";
        cout <<endl;
    }

    system("pause");
    return 0;
}