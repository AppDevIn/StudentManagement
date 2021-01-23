#include<string>
#include "Trie.h"

using namespace std; 

Trie::Trie(){
    root = getNode();
}

Trie::~Trie(){
}

void Trie::insert(string key, int value){


    //temp store the root value 
    TrieNode* node = root;

    //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = key[i] - 'a';

        // if the char in the node is false getNode
        if(!node->children[index])
            node->children[index] = getNode();
        
        //set temp root the next node 
        node = node->children[index];

    }

    node->value = value;

    //Set the last node as end 
    node->isEndOfWord = true;


}

int Trie::get(string key){
    
    //temp store the root value 
    TrieNode* node = root;

        //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = key[i] - 'a';

        // if the char in the node is false getNode
        if(!node->children[index])
            node->children[index] = getNode();
        
        //set temp root the next node 
        node = node->children[index];

    }


    return (node != NULL && node->isEndOfWord) ? node->value : NULL;


}

bool Trie::search(string key){
    
    //temp store the root value 
    TrieNode* node = root;


        //iteatate through each char of the key
    for (int i = 0; i < key.length(); i++)
    {
        //Get the value of single lower case charcter 
        int index = key[i] - 'a';

        // if the char in the node is false getNode
        if(!node->children[index])
            node->children[index] = getNode();
        
        //set temp root the next node 
        node = node->children[index];

    }


    return (node != NULL && node->isEndOfWord);


}





