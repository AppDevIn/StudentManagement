#include<string>
#include <list>
#include "../Models/Student.cpp"

using namespace std; 
  
const int ALPHABET_SIZE = 36; 

typedef string KeyType;
typedef Student ItemType;


class Trie
{
private:
    struct TrieNode 
    { 
        struct TrieNode *children[ALPHABET_SIZE]; 
    
        // isEndOfWord is true if the node represents 
        // end of a word 
        bool isEndOfWord; 
        ItemType item;
        KeyType key;



        TrieNode(){
            bool isEndOfWord = false; 
        }
    }; 

    struct TrieNode *getNode(void){
        TrieNode *pNode =  new TrieNode; 
  
        pNode->isEndOfWord = false; 
    
        for (int i = 0; i < ALPHABET_SIZE; i++){
            pNode->children[i] = NULL; 
        }
    
        return pNode; 
    }
    

    TrieNode *root;
    
    TrieNode* removeR(TrieNode* node, KeyType key, int depth);

    void startsWith(TrieNode* node, list<string>* words);
    
    // Returns new trie node (initialized to NULLs) 
    int getIndex(char c);
    
    bool isEmpty(TrieNode* node);

public:
    Trie(/* args */);

    ~Trie();


    bool insert(KeyType key, ItemType value);

    // string search(KeyType key);
    
    ItemType get(KeyType key);

    bool remove(KeyType key);
    
    bool hasKey(KeyType key);

    list<string> startsWith(KeyType prefix);
};



