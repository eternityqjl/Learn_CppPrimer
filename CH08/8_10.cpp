#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::cerr;
using std::cout;
using std::endl;

int main()
{
    ifstream ifs("../CH08/book.txt");
    if (!ifs)
    {
        cerr << "No Data?" << endl;
        return -1;
    }

    vector<string> vecLine;
    string line;
    while(getline(ifs, line))
        vecLine.push_back(line);
    
    for (auto &s : vecLine)
    {
        istringstream iss(s);
        string word;
        while (iss >> word)
            cout << word << endl;
    }

    system("pause");
    return 0;
}