#include <iostream>
#include <cassert>
#include "Dictionary.cpp"

using namespace std;


int main(int argc, const char **argv)
{

    Student tempStudent;
    tempStudent.id = "123x";
    tempStudent.name = "Jeya";
    tempStudent.email = "jeya@gmail.com";
    tempStudent.tGroup = "T01";
    tempStudent.gpa = 3.1;



    Student deleteStudent;
    deleteStudent.id = "133x";
    deleteStudent.name = "Run Lin";
    deleteStudent.email = "Run Lin@gmail.com";
    deleteStudent.tGroup = "T01";
    deleteStudent.gpa = 3.1;

    Student sortedStudent;
    sortedStudent.id = "100x";
    sortedStudent.name = "Zun Lin";
    sortedStudent.email = "Run Lin@gmail.com";
    sortedStudent.tGroup = "T01";
    sortedStudent.gpa = 3.1;

    Dictionary dictionary;

    dictionary.add(tempStudent.id, tempStudent);
    dictionary.add(deleteStudent.id, deleteStudent);
    dictionary.add(sortedStudent.id, sortedStudent);

    
    cout << "Test case 01: Get values by prefix of 1 ";
    List list = dictionary.getByPrefix("1");
    assert(list.getLength() == 3);
    cout << ":  Passed!" << endl;

    return 0;
}
