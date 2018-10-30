#include<iostream>

#define MAX 10000

using namespace std;

class Stack {
    private:
        int top;
        int array[MAX];
    public:
        Stack() {
            this->top = -1;
        }
        bool push(int);
        int  pop();
        bool isEmpty();
        bool isFull();
        void printStack();
};

bool Stack::push(int numberToPush) {
    if (this->isFull()) {
        return false;
    }
    this->array[++this->top] = numberToPush;
    return true;
}

int Stack::pop() {
    if(this->isEmpty()) {
        return -1;
    }
    return this->array[this->top--];
}

bool Stack::isEmpty() {
    if(this->top < 0) {
        return true;
    }
    return false;
}

bool Stack::isFull() {
    if(this->top == MAX-1) {
        return true;
    }
    return false;
}

void Stack::printStack() {
    for(int i=0; i<=this->top; i++) {
        cout << this->array[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack s;
    for(int i=1; i<=10001; i++) {
        s.push(i);
    }
    cout << s.pop();
}