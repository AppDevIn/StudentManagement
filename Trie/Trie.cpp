/**
 * @brief The class that can be used for search. The keys used is a string
 * with links between each of the node defined not by the idiviual charcaters of each key
 * 
 * @author Jeyavishnu S/O Subramaniam
 * Group 02
 * Student id: S10192836C
 * 
 * The remove  and startsWith function I would like to highlight 
 * 
 * 
 */

#include<string>
#include <stdio.h>
#include <ctype.h>
#include "Trie.h"
#include <iostream>


using namespace std; 

Trie::Trie(){
    root = getNode();
}

Trie::~Trie(){
}


Trie::TrieNode* Trie::removeR(TrieNode* node, string key, int depth){

    //If the node is empty
    if(!node)
        return NULL;


    //If the key at the last chracter 
    if(depth == key.size()){

        //Since the key won't be the end of the 
        //word after being removed
        if(node->isEndOfWord)
            node->isEndOfWord = false;

        //If is not a prefix of any other word
        if(isEmpty(node)){
            node = NULL;
        }
        
        return node;

    }


    //Get the value of single lower case charcter 
    int index = getIndex(key[depth]);
    node->children[index] = removeR(node->children[index], key, depth + 1);

    // If it doesn't have any child and is not the end a word
   if (isEmpty(node) && node->isEndOfWord == false) { 
        node = NULL; 
    } 

    return node;

}

void Trie::startsWithRur(TrieNode* node, List* words){

    //Check if the node is at the end of the word
    if(node->isEndOfWord){
        words->add(node->item); //Add the word into the list
    }

    //Loop through the children of the node
    for (int i = 0; i < ALPHABET_SIZE; i++) 
    {
        //Chec if the node is empty
        if(node->children[i]){
            startsWithRur(node->children[i], words); //Call the this function again 
            
        }
    }
    
}

//return 0-9 if numbers 10 to 36 if alphabets 
int Trie::getIndex(char c){
    return isalpha(c) ? tolower(c) - ('a' - 10) : c - '0';
}

// Returns true if root has no children, else false 
bool Trie::isEmpty(TrieNode* node) 
{ 
    for (int i = 0; i < ALPHABET_SIZE; i++) 
        if (node->children[i]) 
            return false; 
    return true; 
} 




bool Trie::insert(string key, ItemType value){


    //temp store the root value 
    TrieNode* node = root;

    //Check if the keys exist
    if(hasKey(key)){
        return false;
    }

    //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(key[i]);

        // if the char in the node is false getNode
        if(!node->children[index])
            node->children[index] = getNode();
        
        //set temp root the next node 
        node = node->children[index];

    }

    node->key = key;
    node->item = value;

    //Set the last node as end 
    node->isEndOfWord = true;
    //Check if the value is added into the dictionary
    return true;
    

}


ItemType* Trie::get(string key){
    
    //temp store the root value 
    TrieNode* node = root;

        //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(key[i]);;

        // if the char in the node is false getNode
        if(!node->children[index])
            node->children[index] = getNode();
        
        //set temp root the next node 
        node = node->children[index];

    }


    return (node != NULL && node->isEndOfWord) ? &(node->item) : NULL;
}

bool Trie::update(KeyType key, ItemType value){
    //temp store the root value 
    TrieNode* node = root;

    //Check if the keys exist
    if(!hasKey(key)){
        return false;
    }

    //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(key[i]);

        // if the char in the node is false getNode
        if(!node->children[index])
            node->children[index] = getNode();
        
        //set temp root the next node 
        node = node->children[index];

    }

    node->key = key;
    node->item = value;

    //Set the last node as end 
    node->isEndOfWord = true;
    //Check if the value is added into the dictionary
    return true;
}

bool Trie::remove(string key){

    //Check of the key exist
    if (hasKey(key)) {
        removeR(root, key, 0); //Call the recurive function
        return true;
    } else {
        return false;
    }
}

bool Trie::hasKey(string key){


    //temp store the root value 
    TrieNode* node = root;

    //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(key[i]);;

        if(!node->children[index])
            return false;
        
        //set temp root the next node 
        node = node->children[index];

    }

    //Check if the node is not NULL
    //Check if it is the end of the word
    //Return the bool based on this condition
    return (node != NULL && node->isEndOfWord);

}

List Trie::startsWith(string prefix){


    List students; // List of students

    //temp store the root value 
    TrieNode* node = root;

    //Check the prefix length and if the node is not null
    if(prefix.length() == 0 || !node){
        return students;
    }

    //iteatate through each char of the key to go the last possible node
    for (int i = 0; i < prefix.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(prefix[i]);

        //set temp root the next node 
        node = node->children[index];

        //Check if the node is null value
        if(node == nullptr){
            return students; //Return the list of students
        }

    }
    
    //Call the recusive function with refrence to the students list
    startsWithRur(node, &students);

    return students; //Return the list of students 

    

}

List Trie::getAllValues(){
    
    List students; // List of students 

    //temp store the root value 
    TrieNode* node = root;

    //Call the recusive function with refrence to the students list
    startsWithRur(node, &students);

    return students; //Return the list of students 
}



