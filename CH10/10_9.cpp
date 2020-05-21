#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void elimDups (vector<string> &words)
{
    for (auto i : words)
        cout << i << " ";
    cout << endl;

    sort (words.begin(), words.end());
    for (auto j : words)
        cout << j << " ";
    cout << endl;

    auto end_unique = unique(words.begin(), words.end());
    for (auto k : words)
        cout << k << " ";
    cout << endl;

    words.erase(end_unique, words.end());
    for (auto q : words)
        cout << q << " ";
    cout << endl;
}

bool isShorter (const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> vec{"cathay", "singapore", "cargo", "cathay", "ANA", "Emirates", "British", "China", "EVA", "Lufthansa", "ANA", "Asiana", "France"};

    elimDups(vec);
    stable_sort(vec.begin(), vec.end(), isShorter);
    for (const auto &s : vec)
        cout << s << " ";
    cout << endl;

    system("pause");
    return 0;
}