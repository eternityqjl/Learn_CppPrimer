#include <list>
#include <vector>
#include <string>

using std::list;
using std::vector;
using std::string;

list<char *> lst{"Hello", "World"};
vector<string> v;
v.assign(lst.cbegin(), lst.cend());
