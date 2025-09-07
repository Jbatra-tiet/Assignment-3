#include<iostream>
#include<string>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(char c) {
    if (!isFull()) {
        stack[++top] = c;
    }
}

char pop() {
    if (!isEmpty()) {
        return stack[top--];
    }
    return '\0';
}

int main() {
    string str, reversed = "";
    cout << "Enter a string: ";
    cin >> str;

    for (char c : str) {
        push(c);
    }

    while (!isEmpty()) {
        reversed += pop();
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}
