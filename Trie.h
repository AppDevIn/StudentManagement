#include<string>
#include <list>

using namespace std; 
  
const int ALPHABET_SIZE = 36; 


class Trie
{
private:
    struct TrieNode 
    { 
        struct TrieNode *children[ALPHABET_SIZE]; 
    
        // isEndOfWord is true if the node represents 
        // end of a word 
        bool isEndOfWord; 
        string value;
        string key;

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
    
    TrieNode* removeR(TrieNode* node, string key, int depth);

    void startsWith(TrieNode* node, list<string>* words);

public:
    Trie(/* args */);

    ~Trie();

        // Returns new trie node (initialized to NULLs) 
    int getIndex(char c);

    void insert(string key, string value);

    string search(string key);
    
    string get(string key);

    void remove(string key);
    
    bool isEmpty(TrieNode* node);

    bool hasKey(string key);

    list<string> startsWith(string prefix);
};



