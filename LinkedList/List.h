#include <iostream>
#include "../Models/Student.cpp"

using namespace std;

typedef Student ValueType;

class List

{

private:
    struct Node

    {

        ValueType item; // item

        Node *next; // pointer pointing to next node
    };

    int size;

    Node *front; // pointer pointing to front node

    int rCount(Node *curr, ValueType item);
    Node *rReverse(Node *curr);
    Node* getNode();
    Node* tempNode;

public:
    //constructor

    List();

    // add a new item at a specified position in the list

    // 0 <= index < size

    bool add(int index, ValueType item);

    // remove an item at a specified position in the list

    // 0 <= index < size

    void remove(int index);

    // get an item at a specified position in the list

    // 0 <= index < size

    ValueType* get(int index);

    // returns the number of occurrences of item in the list

    int count(ValueType item);

    // recursive function that

    // returns the number of occurrences of item in the list

    int countR(ValueType item);

    // reverses the list

    void reverse();

    // recursive function that reverses the list

    void reverseR();

    // prints all the items in the list

    void display();

    int getLength();

    bool add(ValueType item);

    void begin();

    ValueType next();


    // void removeDuplicatesfromUnsorted();
    
    // void removeDuplicatesfromSorted();

    // void deleteAllOccurrences(ValueType item);

    // void mergeLLAt(List newList, int pos);

    // void reverseAt(int start, int end);

    // ValueType getMiddle();
};
