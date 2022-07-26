#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    vector<int> v2;     //empty vector object
    int c1;
    while(cin >> c1)    //input the integers to the vector v2
    {
        v2.push_back(c1);
    }
        
    for (auto i : v2)
        cout << i << "\n";
    cout << endl;

    system("pause");
    return 0;
}