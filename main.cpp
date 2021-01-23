#include <iostream>
#include<string>
#include "Trie.cpp"

using namespace std;


int main(int argc, char const *argv[]){


    Trie t = Trie();

    t.insert("jeya", 10);
    t.search("jeya")? cout << "Yes\n" : 
                         cout << "No\n"; 

    cout << t.get("jeya") << endl;
    

    return 0;
}