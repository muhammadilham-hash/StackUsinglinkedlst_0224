#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};   
      
class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }       
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    
    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return -1; // Return -1 to indicate stack is empty
        }
        return top->data;
    }