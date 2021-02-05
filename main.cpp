#include <iostream>
#include <string>
#include <list>
#include "Trie.cpp"


using namespace std;

Trie trie;

void menu();
void menuSelection(int pick);
void insertStudent(string name, string studentID);
void deleteStudent(string studentID);
void searchStudent(string studentID);
void prefixSearchStudent(string prefixID);

int main(int argc, char const *argv[])
{

    int pick = 1;

    Student tempStudent;

    tempStudent.id = "123x";
    tempStudent.name = "Jeya";
    tempStudent.email = "jeya@gmail.com";
    tempStudent.tGroup = "t01";
    tempStudent.gpa = 3.1;
    
    trie.insert(tempStudent.id, tempStudent);

    tempStudent.id = "132x";
    tempStudent.name = "runlin";
    tempStudent.email = "r@gmail.com";
    tempStudent.tGroup = "t01";
    tempStudent.gpa = 3.1;
    trie.insert(tempStudent.id, tempStudent);

    cout << "Welcome to Student Management System" << endl;

    while (pick != 0)
    {
        cout << endl;
        //fucntion to call the menu
        menu();

        // choose what you want
        cin >> pick;
        menuSelection(pick);
    }

    return 0;
}

void menu()
{
    cout << "Student Management System Options" << endl;
    cout << 1 << ". Insert Student" << endl;
    cout << 2 << ". Delete Student" << endl;
    cout << 3 << ". Search Student" << endl;
    cout << 4 << ". Prefix Search" << endl;
    cout << 5 << ". Add Grades" << endl;
    cout << "Choose an option:  ";
}

void menuSelection(int pick)
{

    string id, name;

    list<string> words;
    list<string>::iterator it;
    Student tempStudent;

    switch (pick)
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
            trie.insert(tempStudent.id, tempStudent);
            cout << "Stduent: " << tempStudent.name << " added" << endl;
            break;
        case 2:
            cout << "Enter student ID: ";
            cin >> id;
            trie.remove(id);
            break;
        case 3:
            cout << "Enter student ID: ";
            cin >> id;
            cout << trie.get(id) << endl;
            break;
        case 4:
            cout << "Enter prefix student ID: ";
            cin >> id;
            words = trie.startsWith(id);
            
            cout << "\nStudent ID: " << endl;

            for (it = words.begin(); it != words.end(); ++it)
                cout << *it << endl;

            break;
        default:
            cout << "Sorry, please choose a valid option.";
    }
}
