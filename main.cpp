#include <iostream>
#include <string>
#include <list>
#include "Trie/Trie.cpp"
#include "Models/Student.cpp"

using namespace std;

Trie studentCollection;
Trie teacherCollection;

void menu();
void menuSelection(int pick);
void insertStudent(string name, string studentID);
void deleteStudent(string studentID);
void searchStudent(string studentID);
void prefixSearchStudent(string prefixID);

int main(int argc, char const *argv[])
{

    Student student("10192836C", "Jeya", "Block 750 Woodlands avenue 4", "Jeyavishnu22@gamil.com", 4.0, "P01");
    Student student("10192836D", "Stain", "Block 750 Woodlands avenue 4", "Jeyavishnu22@gamil.com", 4.0, "P01");

    
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
    cout << 5 << ". Add Grades" << endl;
    cout << "Choose an option:  ";
}

void menuSelection(int pick)
{

    string id, name;

    list<string> words;
    list<string>::iterator it;

    switch (pick)
    {
    case 0:
        exit(0);
        break;
    case 1:
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;

        studentCollection.insert(id, name);
        break;
    case 2:
        cout << "Enter student ID: ";
        cin >> id;
        studentCollection.remove(id);
        break;
    case 3:
        cout << "Enter student ID: ";
        cin >> id;
        cout << studentCollection.get(id) << endl;
        break;
    case 4:
        cout << "Enter prefix student ID: ";
        cin >> id;
        words = studentCollection.startsWith(id);
        
        cout << "\nStudent ID: " << endl;

        for (it = words.begin(); it != words.end(); ++it)
            cout << *it << endl;

        break;
    default:
        cout << "Sorry, please choose a valid option.";
    }
}
