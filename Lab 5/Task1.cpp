#include <iostream>
#include <string>

using namespace std;

class Stack{
private :
    char *arr;
    int top;
    int size;

// constructor
public:
    Stack(int size){
        arr = new char[size];
        size = size;
        top = -1;
    }

//destructor
~Stack(){
    delete [] arr;
}

// check if the stack is full
bool isFull(){
    return top == size - 1;
}

// check if the stack is empty
bool isEmpty(){
    return top == -1;
}

// to push an element to the top of the stack
void push(char x){
    if (isFull()){
        cout << "Stack Overflow"<<endl;
        return;
    }
    arr[++top] = x;
}

// to pop and retrieve an element from the top of the stack
void pop(){
    if (isEmpty()){
        cout << "Stack Underlow" << endl;
        return;
    }
    return arr[top--];
}

};

