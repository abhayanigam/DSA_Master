//
//  linked_list_traversal.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 19/12/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node *nxt;
};

void printList(Node* ptr){
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->nxt;
    }
    cout << endl;
}

void linkedListTraversalSolution(){
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;

    head->data = 1;
    head->nxt = second;
    
    second->data = 2;
    second->nxt = third;
    
    third->data = 3;
    third->nxt = NULL;
    
    printList(head);
}
