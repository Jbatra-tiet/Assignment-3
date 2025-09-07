#include<iostream>
using namespace std;

#define MAX 5 
int stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << value << endl;
    } else {
        stack[++top] = value;
        cout << value << " pushed into stack." << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Nothing to pop." << endl;
    } else {
        cout << stack[top--] << " popped from stack." << endl;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element: " << stack[top] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << (isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;
            case 4:
                cout << (isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 7);
    return 0;
}
