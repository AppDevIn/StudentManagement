#pragma once
#include<string>
#include <list>
#include "../Models/Student.cpp"
#include "../LinkedList/List.cpp"

using namespace std; 
  
const int ALPHABET_SIZE = 36; 

typedef string KeyType;
typedef Student ItemType;


/**
 * @brief 
 * 
 */

class Trie
{
    private:
        /**
         * @brief The structure that will be used in 
         * create this trie
         * 
         * children with TrieNode
         * isEndOfWord is true meaning is the last node
         * item the Student object 
         * The key that this item will assoicate with
         * 
         */
        struct TrieNode 
        { 
            struct TrieNode *children[ALPHABET_SIZE]; 
            bool isEndOfWord; 
            ItemType item;
            KeyType key;
        }; 
        
        /**
         * @brief Get the TrieNode object 
         * 
         * The children will be set to NULL
         * The isEndOfWord will be initialized with a false
         * 
         * @return struct TrieNode* 
         */
        struct TrieNode *getNode(void){

            //Create a new node
            TrieNode *pNode =  new TrieNode; 

            //Since there is no word set it to false
            pNode->isEndOfWord = false; 
        
            //Iterate through to children array to set the value to NULL
            for (int i = 0; i < ALPHABET_SIZE; i++){
                pNode->children[i] = NULL; 
            }

            //Return the node
            return pNode; 
        }
        
        /**
         * @brief The root where all the key will start from
         * 
         */
        TrieNode *root;
        
        /**
         * @brief A recursion fuction to help with remove function 
         * to remove all the nodes in the children asoicated with 
         * the character in the key
         * 
         * @param node the node that you want to remove the key from
         * @param key The key that you wish to remove from
         * @param depth How deep within the function trie are you in
         * @return TrieNode* 
         */
        TrieNode* removeR(TrieNode* node, KeyType key, int depth);

        /**
         * @brief A recurion to help the startsWith function to get all 
         * the student object recurively 
         * 
         * @param node The node you want check if to get the value from
         * @param students A list of student collected from the recursion
         */
        void startsWithRur(TrieNode* node, List* students);
        
        /**
         * @brief Returns a numerical value of the character (c)
         * 
         * @param c The character you want to get the index position of 
         * @return int Return the a numerical value of the charcater 
         */
        int getIndex(char c);
        
        /**
         * @brief Check if the node has any children
         * 
         * @param node The node that must be checked from children
         * @return true if the node has no children 
         * @return false if the node has children
         */
        bool isEmpty(TrieNode* node);

    public:
        /**
         * @brief Construct a new Trie object
         * 
         */
        Trie();

        /**
         * @brief Destroy the Trie object
         * 
         */
        ~Trie();

        /**
         * @brief Insert the value assoicating it with the key
         * 
         * @param key The key that the value will be recongised by.
         * @param value 
         * @return true 
         * @return false 
         * @note Please ensure the key is unique
         */
        bool insert(KeyType key, ItemType value);

        /**
         * @brief To get the value (Student object) thats assoicated with the key
         * 
         * @param key The key of the value that you want to get
         * @return ItemType* Return the pointor of the value retreived based of the key
         * @warning WIll return null if the doesn't exist 
         */
        ItemType* get(KeyType key);

        /**
         * @brief To remove key and the values assocuiated with the key
         * 
         * @param key The key that you want to be removed
         * @return true if the key and value assoictaed with is removed
         * @return false if the key and value is not removed
         */
        bool remove(KeyType key);
        
        /**
         * @brief Check if the key exist in the trie
         * 
         * @param key The key that will be checked to see it exist
         * @return true if the key doesn't exist 
         * @return false if the key exist
         */
        bool hasKey(KeyType key);

        /**
         * @brief Returns a list of student values based of the prefix
         * 
         * @param prefix Return only the keys that has been prefixed by prefix
         * @return List 
         */
        List startsWith(KeyType prefix);

        /**
         * @brief Returns a list of student values 
         * 
         * @return List of students will be returned
         */
        List getAllValues();

};



