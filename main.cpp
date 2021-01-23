#include <iostream>
#include<string>
#include "Trie.cpp"

using namespace std;


int main(int argc, char const *argv[]){


    Trie t = Trie();

    t.insert("jeya", 10);
    t.insert("runlin", 20);
    t.insert("zac", 200);
    t.search("jeya")? cout << "Yes\n" : 
                         cout << "No\n"; 

    cout << t.get("jeya") << endl;
    cout << t.get("zac") << endl;

    t.remove("jeya");

    t.search("jeya")? cout << "Yes\n" : 
                        cout << "No\n"; 
    

    return 0;
}