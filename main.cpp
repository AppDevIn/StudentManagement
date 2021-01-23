#include <iostream>
#include<string>
#include "Trie.cpp"

using namespace std;


int main(int argc, char const *argv[]){


    Trie t = Trie();

    t.insert("jeya");
    t.search("jeya")? cout << "Yes\n" : 
                         cout << "No\n"; 
    

    return 0;
}