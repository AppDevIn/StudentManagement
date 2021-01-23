#include<string>

using namespace std; 
  
const int ALPHABET_SIZE = 26; 

struct TrieNode 
{ 
    struct TrieNode *children[ALPHABET_SIZE]; 
  
    // isEndOfWord is true if the node represents 
    // end of a word 
    bool isEndOfWord; 
}; 

// Returns new trie node (initialized to NULLs) 
struct TrieNode *getNode(void);

void insert(struct TrieNode *root, string key);

bool search(struct TrieNode *root, string key) 