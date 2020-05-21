#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::ifstream;

void ReadFileToVec(const string& filename, vector<string>& vec)
{
    ifstream ifs(filename);
    if(ifs)
    {
        string buf;
        while(ifs >> buf)
            vec.push_back(buf);
    }
}