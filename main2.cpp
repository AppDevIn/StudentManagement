#include <iostream>
#include <string>
#include "Dictionary.h"

void menu();
void menuSelection(int option);


int main() {
    
    Dictionary student;
    Student temp;
    temp.name = "asdf";
    temp.email = "asdf@adgas.com";
    temp.address = "asdfas";
    temp.gpa = 2.3;
    temp.tGroup = "t01";
    
    student.add("123x", temp);
    student.print();
    
}

void menu(){
    cout << "Student Management System Options" << endl;
        cout << 1 << ". Insert Student" << endl;
        cout << 2 << ". Delete Student" << endl;
        cout << 3 << ". Search Student" << endl;
        cout << 4 << ". Prefix Search" << endl;
        cout << 5 << ". Add Grades" << endl;
        cout << 0 << ". Exit system" << endl;
        cout << "Choose an option:  ";
}

void menuSelection(int option)
{
    string id, name, address, email, tGroup;
    double gpa;
//    string details[5] = {name, address, email, to_string(gpa), tGroup};
    string details[5] = {"name", "address", "email", to_string(2.1), "class"};

    Dictionary sys;

    switch (option)
    {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Enter student ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Address: "; cin >> address;
            cout << "Enter Email: "; cin >> email;
            cout << "Enter accumulative GPA: "; cin >> gpa;
            cout << "Enter Class: "; cin >> tGroup;
            
            
            break;
        case 2:
            cout << "Enter student ID: "; cin >> id;
            break;
        case 3:
            cout << "Enter student ID: "; cin >> id;
            break;
        case 4:
            cout << "Enter prefix student ID: "; cin >> id;
            break;
        default:
            cout << "Sorry, please choose a valid option.";
    }

}


