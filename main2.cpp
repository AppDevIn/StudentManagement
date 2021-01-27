#include <iostream>
#include <string>
#include <regex>
#include "Dictionary.cpp"

void menu();
void menuSelection(int option);

Dictionary sys;

int main() {


    Student tempStudent;

    tempStudent.id = "123x";
    tempStudent.name = "Jeya";
    tempStudent.email = "jeya@gmail.com";
    tempStudent.tGroup = "t01";
    tempStudent.gpa = 3.1;
    
    sys.add(tempStudent.id, tempStudent);

    tempStudent.id = "132x";
    tempStudent.name = "runlin";
    tempStudent.email = "r@gmail.com";
    tempStudent.tGroup = "t01";
    tempStudent.gpa = 3.1;

    sys.add(tempStudent.id, tempStudent);
    
    int option = 1;
    while (option != 0) {
        menu();
        cin >> option;
        menuSelection(option);
        cout << endl;
    }

    

    
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
    
    Student tempStudent;
    
    string tempID;
    int tempGrade;
    int numOfSem;

    switch (option)
    {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Enter student ID: "; cin >> tempStudent.id;
            cout << "Enter Name: "; cin >> tempStudent.name;
            cout << "Enter Address: "; cin >> tempStudent.address;
            cout << "Enter Email: "; cin >> tempStudent.email;
            cout << "Enter accumulative GPA: "; cin >> tempStudent.gpa;
            cout << "Enter Class: "; cin >> tempStudent.tGroup;
            sys.add(tempStudent.id, tempStudent);
            cout << "Stduent: " << tempStudent.name << " added" << endl;
            break;
        case 2:
            cout << "Enter student ID to delete: ";
            cin >> tempID;
            sys.remove(tempID);
            sys.print();
            break;
        case 3:
            cout << "Enter student ID search: ";
            cin >> tempID;
            tempStudent = sys.get(tempID);
            cout << tempStudent.id << tempStudent.name << endl;
            break;
        case 4:
            cout << "Enter prefix student ID: ";
            cin >> tempID;
            sys.getByPrefix(tempID);
            break;
        case 5:
            cout << "Enter Student ID: ";
            cin >> tempID;
            tempStudent = sys.get(tempID);
            cout << tempStudent.name << " : " << tempStudent.gpa << endl;
            cout << "Enter Current sem GPA: ";
            cin >> tempGrade;
            cout << "Enter number of sem taken: ";
            cin >> numOfSem;
            sys.updateGPA(tempID, tempGrade, numOfSem);
            tempStudent = sys.get(tempID);
            cout << tempStudent.name << " : " << tempStudent.gpa << endl;
            break;
        case 6:
            sys.print();
        default:
            cout << "Sorry, please choose a valid option.";
    }

}


