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


    return (node != NULL && node->isEndOfWord) ? node->value : 0;


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
    int index = key[depth] - 'a';
    node->children[index] = removeR(node->children[index], key, depth + 1);

    // If it doesn't have any child and is not the end a word
   if (isEmpty(node) && node->isEndOfWord == false) { 
        delete (node); 
        node = NULL; 
    } 

    return node;




}




