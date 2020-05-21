#include <iostream>
#include <string>
#include <sstream>

using std::istream;

istream& func(istream& is)
{
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();

    return is;
}

int main()
{
    std::istringstream iss("hello");
    func(iss);

    return 0;
}