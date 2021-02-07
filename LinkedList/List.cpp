/**
 * @brief The class that can be used store the list of students 
 * 
 * @author Jeyavishnu S/O Subramaniam
 * Group 02
 * Student id: S10192836C
 * 
 * The highlight would be the sort() function 
 * 
 */

#include "List.h" // header file

List::List()
{
    size = 0; //Set the size to 0

    front = new Node; //Create a new Node
    front->next = NULL; //Set the next node to NULL
}


List::Node *List::rReverse(Node *curr)
{
    if (curr->next == NULL)
    { // if there is only one node

        front = curr;

        return curr;
    }

    Node *temp = rReverse(curr->next);

    temp->next = curr;

    curr->next = NULL;

    return curr;
}

List::Node* List::sortedList(Node* sorted, Node* newNode){

    //Temporary node to swap the elements 
    Node* temp = new Node();
    Node* current = temp;
    temp->next = sorted;
    
    //Sort the list based on the specified order
    while(current->next != NULL && current->next->item.name < newNode->item.name){
      current = current->next;
    }
    
    //Swap the elements
    newNode->next = current->next;
    current->next = newNode;
    
    //Return the sorted list.
    return temp->next;

}

bool List::add(int index, ValueType item)
{
    // If index is valid
    if (index <= size && index >= 0)
    {
        //Create the node
        Node *newNode = new Node;

        //Store the item
        newNode->item = item;

        // Initialize the next pointer to null
        newNode->next = NULL;

        // If inserting in front (i.e., index is 0)
        if (index == 0)
        {
            // Set first node (pointer) to point to new node
            newNode->next = front;
            // Set new node to point to node pointed to by first node
            front = newNode;
        }
        else
        {
            // Traverse to the node just before the indexed node
            Node *current = front;
            for (int i = 0; i < (index - 1); i++)
                current = current->next;

            // Set new node to point to the indexed node
            newNode->next = current->next;
            // Set that node to point to the new node
            current->next = newNode;
        }

        size++;
        return true;
    }
    else
        return false;
}

bool List::add(ValueType item)
{
 
    //Create the node
    Node *newNode = new Node;

    //Store the item
    newNode->item = item;

    // Initialize the next pointer to null
    newNode->next = NULL;


    if(getLength() == 0){
        front = newNode;
        
    } else {
        // Traverse to the node just before the indexed node
        Node *current = front;
        for (int i = 0; i < (getLength() - 1); i++)
            current = current->next;

        // // Set new node to point to the indexed node
        // newNode->next = current->next;
        // // Set that node to point to the new node
        current->next = newNode;

    }


    size++;
    return true;
    
}


void List::remove(int index)
{
    // If index is valid
    if (index < size && index >= 0)
    {

        // If node to be removed is the first node
        if (index == 0)
        {
            //     Set first node to point to the second node (or NULL)
            Node *tmp = front->next;
            front->next = NULL;
            front = tmp;
        }
        else
        {

            //Traverse to the node just before the node to be removed
            Node *current = front;
            for (int i = 0; i < (index - 1); i++)
                current = current->next;
            //Set that node to point to the node after the position
            Node *tmp = current->next->next;
            current->next = NULL;
            current->next = tmp;
        }
        size--;
    }
}

ValueType* List::get(int index)
{
    // If index is valid
    if (index < size && index >= 0)
    {
        // Traverse the list to the index
        Node *current = front;
        for (int i = 0; i <= (index - 1); i++)
            current = current->next;

        // Return the item contained in the node
        return &(current->item);
    }

    return NULL;

    

}

int List::count(ValueType item)
{

    Node *curr = front; // Point the curr to front
    int count = 0; // The value the will keep the track

    //Iterate through the nodes
    while (curr->next)
    {   //Check if matches item
        if (item == curr->item)
            count++; //Increment the value
        //Set the curr the next pointor
        curr = curr->next;
    }
    
    return count; 
}

void List::reverseR()
{
    if(front == NULL){
        rReverse(front);
    }
}

int List::getLength()
{
    return size;
}

void List::begin(){
    tempNode = front;
}

ValueType List::next(){
    
    //Check if the node is empty
    if (!tempNode){
        return  ValueType();
    }
    //Get the item
    ValueType v = tempNode->item;
    //Check if the tempNode next is empty
    if(tempNode->next){
        tempNode = tempNode->next; // Set the next pointor
        return v; //Return the value
    } else if (tempNode){
        return v; //Return the value
    }

    return ValueType(); //Return a empty value
    
}

void List::sort(){
    Node* result = NULL;
    Node* current = front;
    Node* next;

    //Iterate through the loop
    while (current != NULL)
    {
        next = current->next;

        //Sort the linked list of the current element and store it
        result = sortedList(result, current);

        current = next;
    }

    //Return the sorted list
    front = result;
    

}
