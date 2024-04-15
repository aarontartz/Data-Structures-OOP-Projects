//
//  SinglyLinkedList.h
//  main
//
//  Created by Aaron Tartz on 3/28/23.
//

#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Initialize values
    Node(int initData) {
        data = initData;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    
    // Initialize values
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    
    // Prepend node to list
    void Prepend(Node* newNode) {
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    // Append node to list
    void Append(Node* newNode) {
       if (head == nullptr) {
          head = newNode;
          tail = newNode;
       }
       else {
          tail->next = newNode;
          tail = newNode;
       }
    }
    
    // Remove head node
    void RemoveHead() {
        Node* currentNode = head;
        head = head->next;
        delete currentNode;
    }
    
    // Remove tail node
    void RemoveTail() {
        // Find second-to-last node
        Node* currentNode = head;
        while (currentNode->next->next != nullptr) {
            currentNode = currentNode->next;
        }
        delete tail;
        tail = currentNode;
        tail->next = nullptr;
    }
    
    // Print list
    void PrintList(ostream & os, const string & separator = ", ") {
        Node* currentNode = head;
        if (currentNode) {
            // Head node is not preceded by separator
            os << currentNode->data;
            currentNode = currentNode->next;
        }
        while (currentNode) {
            os << separator << currentNode->data;
            currentNode = currentNode->next;
        }
        os << endl;
    }
};

#endif /* SinglyLinkedList_h */
