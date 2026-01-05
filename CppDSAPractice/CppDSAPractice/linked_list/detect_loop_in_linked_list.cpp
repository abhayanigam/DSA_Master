//
//  detect_loop_in_linked_list.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 20/12/25.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

bool detectLoop(Node * head){
    unordered_map<Node *, int> nodemap;
    Node * temp = head;
    
    while (temp != nullptr) {
        if (nodemap.find(temp) != nodemap.end()) {
            cout << "Loop detected at this point : "<< temp->data<< endl;
            return true;
        }
        
        nodemap[temp] = 1;
        
        temp = temp->next;
    }
    
    return false;
}

void detectLoopInLinkedList(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Link the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Create a loop for testing
    fifth->next = third;
    
    bool hasLoop = detectLoop(head);
    
    cout << "The Linked List has loop : " << (hasLoop ? "True" : "False") << endl;
}
