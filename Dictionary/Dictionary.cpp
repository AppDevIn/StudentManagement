#include "Dictionary.h"
#include <iostream>
#include <regex>


Dictionary::Dictionary(){
    size = 0;

    for (int i = 0; i < MAX_SIZE ; i++){
        items[i] = NULL;
    }    
    
}

Dictionary::~Dictionary(){


    for (int i = 0; i < MAX_SIZE; i++)
    {

        Node* node = items[i];

        if(node){
            while(node->next){

                Node* temp = node->next;            

                node->next = NULL;

                node = node->next;

                delete temp;

            }

        } 


        items[i] = NULL;

        delete node;
        

    }
    size = 0;
    


}

int Dictionary::hash(KeyType key){
    int total = 0;
    for(char x : key){
        if (isalpha(x)) {
            if (isupper(x)) {
                total += (int)x - (int)'A';
            }
            else{
                total += (int)x - (int)'a' + 26;
            }
        }
        else if(isnumber(x)){
            total += x;
        }
        else{
            total += -1;
        }
    }
    return total % MAX_SIZE;
}

bool Dictionary::add(KeyType newKey, ItemType newItem){
    
    int index = hash(newKey);
    Node* temp = new Node;
    temp -> item = newItem;
    temp -> next = NULL;
    temp -> key = newKey;

    
    if(items[index] == NULL){
        items[index] = temp;
    }
    else{
        if(temp -> key == items[index] -> key){
            return false;
        }
        else{
            while (temp -> next != NULL) {
                items[index] = items[index] -> next;
            }
        }
        items[index] -> next = temp;
        
    }
    size++;
    return true;
}

ItemType Dictionary::get(KeyType key){

    ItemType item;

    //Get the hash value for the key
    int hashValue = hash(key);

    //Get the item based on the hashvalue
    Node* node = items[hashValue];

    //Check if the first item is not empty
    if(node){
        Node* current = node;
        //Trasverse through the node the find the key
        while(current){
            //If you got the key return the item
            if(current->key == key)
                return current->item;

            current = current->next;
        }

    }

    return item;

}

//void PrintMatches(string str, regex reg){
//
//    // This holds the first match
//    sregex_iterator currentMatch(str.begin(),
//            str.end(), reg);
//
//    // Used to determine if there are any more matches
//    sregex_iterator lastMatch;
//
//    // While the current match doesn't equal the last
//    while(currentMatch != lastMatch){
//        smatch match = *currentMatch;
//        cout << match.str() << "\n";
//        currentMatch++;
//    }
//}


void Dictionary::getByPrefix(KeyType key){
    
    string temp = "";
    // create the string of all the ID
    for (int i = 0; i < MAX_SIZE; i++) {
        Node* node = items[i];
        if (node != NULL) {
            
            while(node){
                temp += node -> item.id + " ";
                node = node->next;
            }
        }
    }
    
    // regex expression
    regex reg ("(" + key + "([^ ]+)?)");
    
    // This holds the first match
    sregex_iterator currentMatch(temp.begin(),
            temp.end(), reg);
    
    // Used to determine if there are any more matches
    sregex_iterator lastMatch;

    while(currentMatch != lastMatch){
        Student tempStudent;
        smatch match = *currentMatch;
        tempStudent = get(match.str());
        cout << tempStudent.id << " " << tempStudent.name << endl;
        currentMatch++;
    }
    
}

void Dictionary::updateGPA(KeyType key, double newGPA, int numOfSem){
    
    int index = hash(key);
    double accGPA;
    
    Node* node = items[index];
    if (node) {
        accGPA = (node -> item.gpa + newGPA) / numOfSem;
        node -> item.gpa = accGPA;
    }
}

void Dictionary::remove(KeyType key){
    //Compute the index using hash function
    int hashValue = hash(key);
    Node* node = items[hashValue]; 

    // If list at index is not empty
    if(node){
        //Perform list remove of item with specified key
        
        Node* current = node;

        if(current->key == key){
            Node* next = current->next;
            current->next = NULL;

            Node* temp = current;

            current = next;
            
            items[hashValue] = current;

            delete temp;
            
        }else{
            while (current->next)
            {
                
                if(current->next->key ==  key){
                    Node* temp = current->next->next;
                    current->next->next = NULL;
                    current->next = NULL;
                    current->next = temp;

                }

                current = current->next;
            }
        }
        


        //Decrease the size by 1
        size--;

    }

}

int Dictionary::getLength(){return size;}

void Dictionary::print(){
    
    for (int i = 0; i < MAX_SIZE ; i++)
    {
        Node* node = items[i];
        if(node != NULL){
         
//            cout << node->key << " :" << node -> item << endl;
            Student temp = node -> item;
            cout << node -> key << " : " << temp.name << " " << temp.email << " "
            << temp.address << " " << temp.gpa << " " << temp.tGroup << endl;
            
            while(node->next){
//                cout << node->next->key << " :" << node -> next -> item << endl;
                cout << node -> key << " : " << node -> next -> item.name << endl;
                node = node->next;
            }
        }

    }

}

bool Dictionary::hasKey(string key){

    //Get the hash value for the key
    int hashValue = hash(key);

    //Get the item based on the hashvalue
    Node* node = items[hashValue];

    //Check if the first item is not empty
    if(node){
        Node* current = node;
        //Trasverse through the node the find the key
        while(current){
            //If you got the key return the item
            if(current->key == key)
                return true;

            current = current->next;
        }

    }

    return false;
}



bool Dictionary::isEmpty(){ return bool(size); }
