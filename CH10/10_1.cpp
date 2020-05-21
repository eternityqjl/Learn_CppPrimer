#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::count;

int main()
{
    vector<int> vec;
    int number;
    int count_number;
    int result;

    cout << "Please enter the numbers: " << endl;
    while (cin >> number)
        vec.push_back(number);
    cout << "\n";

    cout << "Enter the number you want to count: ";
    cin >> count_number;
    cout << "\n";

    result = count(vec.begin(), vec.end(), count_number);
    cout << "The result is: " << result << "." << endl;

    system ("pause");
    return 0;
}