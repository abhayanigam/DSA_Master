//
//  linked_list_insertion.cpp
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

void linkedListInsertionTraversal(Node * ptr){
    while (ptr!=NULL) {
        cout << ptr->data << " ";
        ptr= ptr->next;
    }
    cout << endl;
}

Node * insertElementAtFirstIndex(Node * head, int value){
    Node * ptr = new Node;
    ptr->data = value;
    
    ptr->next = head;
    head = ptr;
    
    return ptr;
}

Node * insertElementAtLastIndex(Node * head, int value){
    Node * ptr = new Node;
    ptr->data = value;
    ptr->next = NULL;
    
    Node * p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    
    p->next= ptr;
    
    return head;
}

Node * insertElementInBetweenIndex(Node * head, int index, int value){
    Node * ptr = new Node;
    ptr->data = value;
    
    Node * p = head;
    
    for (int i = 0; i<index-1; i++) {
        p = p->next;
    }
    
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}

Node * inserElementAfterNode(Node * head, Node* afterNode, int value){
    Node * ptr = new Node;
    ptr->data = value;
    
    ptr->next = afterNode->next;
    afterNode->next = ptr;
    
    return head;
}

void linkedListInsertionMethods(){
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    
    /// Adding the element in the first Index
    head = insertElementAtFirstIndex(head, 100);
    
    /// Adding the element in the last Index
    head = insertElementAtLastIndex(head, 200);
    
    /// Adding the element in between the index
    head = insertElementInBetweenIndex(head, 2, 300);
    
    /// Adding the element after a node
    head = inserElementAfterNode(head,second,400);

    linkedListInsertionTraversal(head);
    linkedListInsertionTraversal(head);
}
