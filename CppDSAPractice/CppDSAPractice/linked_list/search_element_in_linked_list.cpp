//
//  search_element_in_linked_list.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 20/12/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node * next;
};

void printSearchedLinkedList(Node * head){
    for (Node * ptr = head; ptr != NULL; ptr= ptr->next) {
        cout << ptr->data << " ";
    }cout << endl;
}

bool searchElement(Node * head, int searchValue){
    for (Node * ptr = head; ptr != NULL; ptr=ptr->next) {
        if (ptr->data == searchValue) {
            return true;
        }
    }
    
    return false;
}

void searchElementInLinkedList(){
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    Node * fourth = new Node;
    
    head->data = 1;
    second->data = 2;
    third->data = 5;
    fourth->data = 4;
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    bool isfound = searchElement(head,5);
    
    cout << "The Element is found : " << (isfound ? "True" : "False") << endl;
}
