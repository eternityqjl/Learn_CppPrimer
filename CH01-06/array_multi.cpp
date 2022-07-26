#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ia[3][4];
    int (*p)[4] = &ia[2];

    for (auto p =ia; p != ia + 3; ++p)
    {
        //*p是一个含有4个整数的数组，数组名被自动转换成指向该数组首元素的指针
        //q指向包含4个整数的数组的首元素，即q指向一个整数

        for (auto q = *p; q != *p + 4; ++p)
            cout << *q << ' ';
            cout << endl;
    }
    //以上内容的另一种写法，使用标准库函数begin、end
    for (auto p = begin(ia); p != end(ia); ++p)
    {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
        cout << endl;
    }

}