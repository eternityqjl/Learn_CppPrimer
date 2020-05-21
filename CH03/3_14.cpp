#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> store;
    int num;
    while (cin >> num)
        store.push_back(num);

    for (auto i : store)
        cout << i << endl;

    system("pause");
    return 0;
}