#include <iostream>
#include <string>

using std::istream;
using std::ostream;
using std::string;

class Person
{
    friend istream &read(istream &is, Person &person);
    friend ostream &print(ostream &os, const Person &person);

public:
    Person() = default;
    Person(const string& sname, const string& saddr): 
            name(sname), address(saddr) {}
    Person(istream &is) {read(is, *this); }

    string get_name() const {return name;}
    string get_addr() const {return address;}
    
private:
    string name;
    string address;
};

istream &read(istream &is, Person &person)
{
    return is >> person.name >> person.address;
}

ostream &print(ostream &os, const Person &person)
{
    return os << person.name << " " << person.address;
}