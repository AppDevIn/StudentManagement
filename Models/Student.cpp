#include <iostream>
#include <string>
#include "User.cpp"
using namespace std;

class Student: public User {
    public:
        double gpa;
        string tGroup;
    
    Student(): {}
    Student(Usert& user): User(user.id, user.name, user.address, user.email) {}
    Student(string id, string name, string address, string email, double gpa, string tGroup): User(id, name, address, email), gpa(gpa), tGroup(tGroup) {}
    
};
