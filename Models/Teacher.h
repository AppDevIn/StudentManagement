#include <iostream>
#include <string>
#include "User.h"
using namespace std;

class Teacher: public User {
    public:
        string password;
    
        Teacher();
        Teacher(User& user): User(user.id, user.name, user.address, user.email) {}
        Teacher(string id, string name, string address, string email): User(id, name, address, email), password(password) {}
    
};
