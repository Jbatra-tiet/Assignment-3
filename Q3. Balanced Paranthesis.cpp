#include <iostream>
#include <string>
using namespace std;

class Stack {
    public:
    int rear = -1;
    char parenthesis[10];
    
    void push(char p) {
        rear++;
        parenthesis[rear] = p;
    }

    void pop() {
        if(rear >= 0) {
            rear--;
        }
    }

    char peek() {
        if (rear >= 0) {
            return parenthesis[rear];
        }
        return '\0';
    }
};

int main() {
    Stack s;
    string e;
    cout << "Enter expression(No Spaces): ";
    cin >> e;
    for(int i = 0; i < e.length(); i++) {
        if(e[i] == '(' or e[i] == '{' or e[i] == '[') {
            s.push(e[i]);
        } else if(e[i] == ')') {
            if(s.peek() == '(') {
                s.pop();
            } else {
                cout << "Invalid expression" << endl;
                return 0;
            }
        } else if(e[i] == '}') {
            if(s.peek() == '{') {
                s.pop();
            } else {
                cout << "Invalid expression" << endl;
                return 0;
            }
        } else if(e[i] == ']') {
            if(s.peek() == '[') {
                s.pop();
            } else {
                cout << "Invalid expression" << endl;
                return 0;
            }
        }
    }
    if(s.rear == -1) {
        cout << "Expression is balanced" << endl;
    } else {
        cout << "Expression is not balanced" << endl;
    }
    return 0;
}
