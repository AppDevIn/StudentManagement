/**
 * @brief The class that can be used store the list of students 
 * 
 * @author Jeyavishnu S/O Subramaniam
 * Group 02
 * Student id: S10192836C
 * 
 * The highlight would be the sort() function 
 * 
 */


#pragma once
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
    Node* tempNode; //To be used by begin()

    /**
     * @brief The Recursive function to for reverseR
     * @pre none
     * @post It will reverse the list
     * @param curr The node you to revese from
     * @return Node* returns the node that is being reversed
     */
    Node *rReverse(Node *curr);

    /**
     * @brief The helper function for sort 
     * @pre none
     * @post Insert the node at the right position
     * @param sorted The node that has been sorted
     * @param current The node that needs to be sorted
     * @return Node* return a sorted node
     */
    Node* sortedList(Node* sorted, Node* current);

public:
    /**
     * @brief Construct a new List object
     * 
     */
    List();

    /**
     * @brief Add a new item add the end of the node
     * @pre none
     * @post Add the item at the end of the list
     * @param item The item you want the last position to store
     * @return true if the value is added into the list
     * @return false if the value failed to be added
     */
    bool add(ValueType item);

    /**
     * @brief Add a new item into a specfic positon of the list
     * @pre 0 <= index < size
     * @post Give a boolean with success being true
     * @param index The position you wish to insert the ite,
     * @param item The item that position will contain
     * @return true if adding the item was successful
     * @return false if the adding the item was failed
     */
    bool add(int index, ValueType item);

    /**
     * @brief Remove the item from the specific position from the list
     * @pre 0 <= index < size
     * @post The item will be remove from the list
     * @param index The position you wish to remove the item from
     */
    void remove(int index);

    /**
     * @brief Get the item from the specific position from the list
     * @pre 0 <= index < size
     * @post The value of the item
     * @param index 0 <= index < size
     * @return ValueType* The value of the item from the index position
     */
    ValueType* get(int index);

    /**
     * @brief Returns the number of occurrencess of the item in the list
     * @pre none
     * @post You will the number of occurrencess
     * @param item The item to you find the number of occurance 
     * @return int The number of occurrencess
     */
    int count(ValueType item);

    /**
     * @brief A function that reverses the list
     * @pre none
     * @post reveverse the entire list
     */
    void reverseR();

    /**
     * @brief Returns the size of teh list
     * @pre none
     * @post The size of the list
     * @return int The size of the list 
     */
    int getLength();

    /**
     * @brief This function is to be used togther with next() it rests to 
     * the start of node the tempNode which will be used by next() fuction
     * @pre none
     * @post tempNode will be front node
     */
    void begin();

    /**
     * @brief This function must be used togther with next()
     * @pre Must use begin() if reset is needed
     * @post the tempNode will be pointing to tempNde->next
     * @return ValueType Returns the value of the tempNode
     * @warning The ValueType might be empty so check if the id is not empty ("")
     */
    ValueType next();

    /**
     * @brief Sort the List by the name of the student 
     * using insertition sort
     * @pre none
     * @post The array will be sorted by the name from A-Z
     */
    void sort();

};
