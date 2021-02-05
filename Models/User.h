#include <iostream>
#include <string>
using namespace std;

class User {

    public:
        string id;
        string name;
        string address;
        string email;

        User();
        User(string id, string name, string address, string email) : id(id), name(name), address(address), email(email) {}
    
};
