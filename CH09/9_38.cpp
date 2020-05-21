#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 100; i++)
    {
        cout << "capacity: " << v.capacity() << " size: " << v.size() << endl;
        v.push_back(i);
    }

    system("pause");
    return 0;
}

//result: capacity: 0, 1, 2, 4, 8, 16, 32, 64, 128