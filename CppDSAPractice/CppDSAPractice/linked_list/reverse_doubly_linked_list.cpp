//
//  reverse_doubly_linked_list.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 20/12/25.
//

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;
    Node * back;
    
    // constructor with data, next and back reference
    Node(int value, Node * next1, Node * next2){
        data = value;
        next = next1;
        back = next2;
    }
    
    Node(int value){
        data = value;
        next = nullptr;
        back = nullptr;
    }
};

Node * convertArrToDLL(vector<int> arr){
    Node * head = new Node(arr[0]);
    
    Node * prev = head;
    
    for(int i = 1; i<arr.size(); i++){
        Node * temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        
        prev = temp;
    }
    
    return head;
}

void print(Node* head) {
    // Traverse from head to end and print each node's data
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node * reverseDLL(Node * head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    
    Node * curr = head;
    
    while (curr != nullptr) {
        Node * temp = curr->next;
        curr->next = curr->back;
        curr->back = temp;
        
        head = curr;
        curr = temp;
    }
    
    return head;
}

void reverseDoublyLinkedList(){
    vector<int> arr = {10,20,30,40};
    
    // convert an array in DLL
    Node * head = convertArrToDLL(arr);
    
    head = reverseDLL(head);
    
    print(head);
}
