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

    void setName(string name){

        name = name;

    }
    

    bool operator==(const Student& s){
        return s.id == this->id;
    }
};

