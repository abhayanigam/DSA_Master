//
//  linked_list_deletion.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 20/12/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int value;
    Node * next;
};

Node * deleteFirstElement(Node * head){
    Node * oldHead = head;
    head = oldHead->next;
    
    free(oldHead);
    
    return head;
}

Node * deleteLastElement(Node * head){
    Node * p = head;
    Node * q = head->next;
    
    while (q->next != NULL) {
        q = q->next;
        p = p->next;
    }
    
    p->next = NULL;
    free(q);
    
    return head;
}

Node * deleteElementAtIndex(Node * head, int index){
    Node * p = head;
    Node * q = head->next;
    
    for(int i = 0; i < index-1; i++){
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    
    return head;
}

void linkedListDeletionTraversal(Node * ptr){
    while (ptr!=NULL) {
        cout << ptr->value << " ";
        ptr= ptr->next;
    }
    cout << endl;
}

void linkedListDeletionMethods(){
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    Node * fourth = new Node;
    Node * fifth = new Node;
    
    head->value = 1;
    second->value = 2;
    third->value = 3;
    fourth->value = 4;
    fifth->value = 5;
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    
    cout << "Linked List Data Before Deletion Operations" << endl;
    linkedListDeletionTraversal(head);
    
    /// Delete Element At First Index or Delete Head
//    head = deleteFirstElement(head);
    
    /// Delete The Last Element
//    head = deleteLastElement(head);
    
    /// Delete Element At An Index
    head = deleteElementAtIndex(head,2);
    
    
    cout << "Linked List Data After Deletion Operations" << endl;
    linkedListDeletionTraversal(head);
}
