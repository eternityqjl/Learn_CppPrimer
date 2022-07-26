#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *p = arr;
    int *e = &arr[10];
    for (int *b = arr; b != e; ++b)
        cout << *b << "\n";
    cout << endl;

    system("pause");
    return 0;
}