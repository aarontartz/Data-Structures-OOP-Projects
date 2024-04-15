//
//  Stack.h
//  main
//
//  Created by Aaron Tartz on 3/28/23.
//

#ifndef Stack_h
#define Stack_h

#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

class Stack {
private:
    LinkedList List;

public:
    Stack() {
    }
   
    // Create a new node and prepend
    void StackPushBefore(int newData) {
        Node* newNode = new Node(newData);
        List.Prepend(newNode);
    }
    
    // Create a new node and prepend
    void StackPushAfter(int newData) {
        Node* newNode = new Node(newData);
        List.Append(newNode);
    }
   
    // Remove list head
    void StackPopFront() {
        List.RemoveHead();
    }

    // Remove list tail
    void StackPopBack() {
        List.RemoveTail();
    }
   
    // Print list
    void Print(ostream & os) {
        List.PrintList(os);
    }
};

#endif /* Stack_h */
