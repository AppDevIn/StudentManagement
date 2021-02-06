#include <iostream>
#include <cassert>
#include "Trie.cpp"

using namespace std;

Trie trie;
int main(int argc, const char **argv)
{

    Student tempStudent;
    tempStudent.id = "123x";
    tempStudent.name = "Jeya";
    tempStudent.email = "jeya@gmail.com";
    tempStudent.tGroup = "T01";
    tempStudent.gpa = 3.1;

    cout << "Test case 01: Inserting student with the id " << tempStudent.id;
    assert(trie.insert(tempStudent.id, tempStudent) == true);
    cout << ":  Passed!" << endl;

    cout << "Test case 02: Inserting student same id and name " << tempStudent.id;
    assert(trie.insert(tempStudent.id, tempStudent) == false);
    cout << ":  Passed!" << endl;

    cout << "Test case 03: Getting the student deatails";
    Student *s = trie.get(tempStudent.id);
    assert(tempStudent.name == s->name && s->id == tempStudent.id);
    cout << ":  Passed!" << endl;

    cout << "Test case 04: Haskey ";
    assert(trie.hasKey(tempStudent.id) == true);
    cout << ":  Passed!" << endl;

    cout << "Test case 05: Haskey ";
    assert(trie.hasKey("32464513524564") == false);
    cout << ":  Passed!" << endl;


    Student deleteStudent;
    deleteStudent.id = "133x";
    deleteStudent.name = "Run Lin";
    deleteStudent.email = "Run Lin@gmail.com";
    deleteStudent.tGroup = "T01";
    deleteStudent.gpa = 3.1;

    //I haven't insert the delete student yet
    cout << "Test case 06: Delete Student but the id doesn't exist " << deleteStudent.id;
    assert(trie.remove(deleteStudent.id) == false);
    cout << ":  Passed!" << endl;

    trie.insert(deleteStudent.id, deleteStudent);
    cout << "Test case 07: Delete ID Student " << deleteStudent.id;
    assert((trie.remove(deleteStudent.id) == true && trie.get(deleteStudent.id) == NULL) == true);
    cout << ":  Passed!" << endl;



    
    cout << "Test case 08: Prefix search 1 with one element";
    List list1 = trie.startsWith("1");
    assert((list1.getLength() == 1 && list1.get(0)->id == tempStudent.id) == true);

    list1.begin();
    for (int i = 0; i < list1.getLength(); i++)
    {
        string tGroup = list1.next().tGroup;
        assert( tGroup == "T01");
        
        
    }
    cout << ":  Passed!" << endl;




    trie.insert(deleteStudent.id, deleteStudent);
    cout << "Test case 09: Prefix search 1 with 2 element";
    List list = trie.startsWith("1");
    assert((list.getLength() == 2 && list.get(0)->id == tempStudent.id) == true);

    list.begin();
    for (int i = 0; i < list.getLength(); i++)
    {
        string tGroup = list.next().tGroup;
        assert( tGroup == "T01");
        
        
    }
    cout << ":  Passed!" << endl;


    cout << "Test case 10: Prefix search with no key";
    list = trie.startsWith("");
    assert(list.getLength() == 0 );
    cout << ":  Passed!" << endl;
    
     
    cout << "Test case 11: Prefix search with no existing key";
    list = trie.startsWith("976");
    assert(list.getLength() == 0 );
    cout << ":  Passed!" << endl;

         
    cout << "Test case 12: Prefix search with Empty Node";
    trie.remove(tempStudent.id);
    trie.remove(deleteStudent.id);
    list = trie.startsWith("976");
    assert(list.getLength() == 0 );
    cout << ":  Passed!" << endl;



    return 0;
}