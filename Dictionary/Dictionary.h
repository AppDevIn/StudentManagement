/**
  @brief this class is use to construct the dicstionary for hashmap
 * xiong run lin
 * S10189595
 * group 2
 *
 * speical feature:
 *
 * int hash(keyType key)
 * List getByPrefix(KeyType key)
 */
#pragma once
// #include "../Models/Student.cpp"
#include "../LinkedList/List.h"
#include <string>
#include <iostream>
using namespace std;

const int MAX_SIZE = 101;
typedef string KeyType;
typedef Student ItemType;


class Dictionary
{
private:

	struct Node
	{
        KeyType	 key;   /// search key
        ItemType item; /// data item
        Node     *next;	/// pointer pointing to next item with same search key
	};

	Node *items[MAX_SIZE];
    int  size;			/// number of items in the Dictionary

public:

    /// constructor
	Dictionary();

    /// destructor
	~Dictionary();

	int hash(KeyType key);

    /**
     * @brief add a new item with a hashed key to the Dictionary
     *
     * pre: none
     * post: new item being added to the Dictionary
     *       size of Dictionary increased by 1
     *
     * @param newKey, student
     * @returns ture if the node is successfully added
     * @returns false if the node is not added
     */
	bool add(KeyType newKey, ItemType student);
    /**
     * @brief remove item with the given key in the Dictionary
     *
     * pre: given key exist in the Dictionary
     * post: item at given key is removed
     *       size of Dictionary decreased by 1
     *
     * @param key
     */
	void remove(KeyType key);

    /**
     * @brief get item in the Dictionary with the given key
     *
     * pre: given key exist in the Dictionary
     * post: none
     *
     * @param key
     * @returns empty string if key does not exist in the Dictionary
     * @returns item in the node of the given key in the Dictionary
     */
	ItemType get(KeyType key);
    
    /**
     * @brief search item in Dictionary with the given prefix key
     *
     * pre: Dictionary is not empty
     * pre: given key exist in the Dictionary
     * post: none
     *
     * @param key
     * @returns list of all items in the Dictionary matching the prefix key
     */
    List getByPrefix(KeyType key);


    /**
     * @brief check if the Dictionary is empty
     *
     * pre: none
     * post: none
     *
     * @param
     * @returns ture if the Dictionary is empty
     * @returns flase if the Dictionary is not empty
     */
	bool isEmpty();

    /**
     * @brief get the length of the Dictionary
     *
     *pre: none
     *post: none
     *
     * @returns the length of the Dictionary
     */
	int getLength();

    /**
     * @brief print all the items in the Dictionary
     *
     * pre: none
     * post: none
     *
     * @param
     */
	void print();

    /**
     * @brief check if the items in the Dictionary has a key
     *
     * pre: node is not empty
     * post: none
     *
     * @param key
     * @returns ture if the node contain the key
     * @returns flase if the node dose not contain the given key
     */
	bool hasKey(string key);
};
