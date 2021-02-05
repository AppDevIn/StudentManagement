#include<string>
#include <stdio.h>
#include <ctype.h>
#include "Trie.h"
#include <iostream>
#include <list>

using namespace std; 




Trie::Trie(){
    root = getNode();
}

Trie::~Trie(){
}

int Trie::getIndex(char c){
    return isalpha(c) ? tolower(c) - ('a' - 10) : c - '0';
}

void Trie::insert(KeyType key, Student value){

    

    //temp store the root value 
    TrieNode* node = root;

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
    

    node->item.add(value.id, value);
    node->key = key;

    //Set the last node as end 
    node->isEndOfWord = true;


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


    return (node != NULL && node->isEndOfWord);




}


string Trie::get(string key){
    
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


    return (node != NULL && node->isEndOfWord) ? node->item.get(key).name : "No value";


}

string Trie::search(string key){
    
    //temp store the root value 
    TrieNode* node = root;


        //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(key[i]);;

        if(!node->children[index])
            return NULL;
        
        //set temp root the next node 
        node = node->children[index];

    }


    return (node != NULL && node->isEndOfWord) ? node->item.get(key).name : NULL;


}

// Returns true if root has no children, else false 
bool Trie::isEmpty(TrieNode* node) 
{ 
    for (int i = 0; i < ALPHABET_SIZE; i++) 
        if (node->children[i]) 
            return false; 
    return true; 
} 

void Trie::remove(string key){
    removeR(root, key, 0);
}

Trie::TrieNode* Trie::removeR(TrieNode* node, string key, int depth){

    //If the node is empty
    if(!node)
        return NULL;


    //If the key at the last chracter 
    if(depth == key.size()){

        //Since the key won't be the end of the 
        //world after being removed
        if(node->isEndOfWord)
            node->isEndOfWord = false;

        //If is not a prefix of any other word
        if(isEmpty(node)){
            delete(node);
            node = NULL;
        }
        
        return node;

    }


    //Get the value of single lower case charcter 
    int index = getIndex(key[depth]);
    node->children[index] = removeR(node->children[index], key, depth + 1);

    // If it doesn't have any child and is not the end a word
   if (isEmpty(node) && node->isEndOfWord == false) { 
        delete (node); 
        node = NULL; 
    } 

    return node;




}

void Trie::startsWith(TrieNode* node, list<string>* words){


    if(node->isEndOfWord){
        words->push_back(node->key);
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) 
    {
        if(node->children[i]){
            startsWith(node->children[i], words);
            
        }
    }
    


}


list<string> Trie::startsWith(string prefix){

    list<string> words;

    //temp store the root value 
    TrieNode* node = root;

    //iteatate through each char of the key
    for (int i = 0; i < prefix.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = getIndex(prefix[i]);;

        //set temp root the next node 
        node = node->children[index];

    }

    startsWith(node, &words);

    return words;

    

}






