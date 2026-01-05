//
//  doubly_linked_list.cpp
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
    Node * prev;
    
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node * head, int value){
    Node * newNode = new Node(value);
    
    newNode->next = head;
    if(head != NULL) {
        head->prev = newNode;
    }
    
    head = newNode;
}

void insertAtTail(Node * head, int value){
    if(head == NULL){
        insertAtHead(head,value);
        return;
    }
    
    Node * newNode = new Node(value);
    Node * temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

void display(Node* ptr){
        while (ptr!=NULL) {
            cout << ptr->data << " ";
            ptr= ptr->next;
        }
        cout << endl;
    }

void doublyLinkedListMethods(){
    Node * head = NULL;
    
    cout << "Inserting at tail" << endl;
    
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    
    display(head);
}
