#include <iostream>
#include <string>
using namespace std;

struct Student {

    string id;
    string name;
    string address;
    string email;
    double gpa;
    string tGroup;

    bool operator==(const Student& s){
        return s.id == this->id;
    }
};
