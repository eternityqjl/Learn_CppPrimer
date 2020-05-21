#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using std::vector;
using std::accumulate;
using std::cout;
using std::endl;

int main()
{
    vector<int> vec{1, 4, 64, 43, 23, 555, 543, 754};
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);
    cout << sum << endl;

    system("pause");
    return 0;
}