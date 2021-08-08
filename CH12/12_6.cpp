#include <iostream>
#include <vector>
#include <memory>

using std::vector;

vector<int>* alloc_vector()
{//返回一个动态分配的int的vector
    return new vector<int>();
}

void assign_vector(vector<int>* p)
{
    int i;
    while (std::cin >> i)
    {
        p->push_back(i);
    }
}

void print_vector(vector<int>* p)
{
    for (auto i : *p)
        std::cout << i << std::endl;
}


int main()
{
    auto p = alloc_vector();
    assign_vector(p);
    print_vector(p);
    delete p;

    return 0;
}