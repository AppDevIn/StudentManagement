#include<string>

using namespace std; 
  
const int ALPHABET_SIZE = 26; 


class Trie
{
private:
    struct TrieNode 
    { 
        struct TrieNode *children[ALPHABET_SIZE]; 
    
        // isEndOfWord is true if the node represents 
        // end of a word 
        bool isEndOfWord; 
        int value;
    }; 
    struct TrieNode *getNode(void){
        TrieNode *pNode =  new TrieNode; 
  
        pNode->isEndOfWord = false; 
    
        for (int i = 0; i < ALPHABET_SIZE; i++) 
            pNode->children[i] = NULL; 
    
        return pNode; 
    }

    TrieNode *root;

public:
    Trie(/* args */);

    ~Trie();

        // Returns new trie node (initialized to NULLs) 
    

    void insert(string key, int value);

    bool search(string key);
    
    int get(string key);
};



