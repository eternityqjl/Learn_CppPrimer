#include <iostream>
#include <string>
#include <deque>

using std::deque;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    deque<string> lst;
    string word;

    while (cin >> word)     //从标准输入读入string序列
        //每输入一个string按下Enter就把一个word存入了lst中
        //要结束输入只需在新行(即输入完成后回车到新行)后输入ctrl+z并回车结束输入
        lst.push_back(word);
    
    for (auto iter = lst.cbegin(); iter != lst.end(); ++iter)   //使用迭代器打印deque中的元素
        cout << *iter <<endl;

    system("pause");
    return 0;
}
