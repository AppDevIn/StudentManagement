#include <iostream>
#include <string>
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
    cout << "Choose an option:  ";
}

void menuSelection(int pick)
{

    string id, name;
    
    switch (pick)
    {
        case 0:
            exit(0);
            break;
        case 1:
            cout << "Enter student ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;

            trie.insert(id, name);
            break;
        case 2:
            break;
        case 3:
            cout << "Enter student ID: "; cin >> id;
            cout << trie.get(id) << endl;
            break;
        default:
            cout << "Sorry, please choose a valid option.";
    }
}