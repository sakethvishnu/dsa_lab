#include<iostream>
using namespace std;

int stack[100],top = -1, n = 100;
void push();
void pop();
void display();

int main(){
    int choice;
    while (1)
    {
        cout<<"Enter your choice    :"<<endl;
        cout<<"1. push\n2. pop\n3. display\n4. exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(0);
        default: cout<<"Enter a correct choice  "<<endl<<endl;
        }
    }
}

void push(){
    int push_element;
    cout<<"Enter an elements to be pushed   "<<endl;
    cin>>push_element;
    if(top>n){
        cout<<"Stack is full    "<<endl;
        return;
    }
    top++;
    stack[top] = push_element;
}

void pop(){
    if(top == -1){
        cout<<"The staack is empty"<<endl;
        return;
    }
    cout<<"The element "<<stack[top]<<" is removed from the stack"<<endl;
    top--;
}

void display(){
    if(top == -1){
        cout<<"The stack is empty"<<endl;
        return;
    }
    cout<<"The elements in the stack are    :"<<endl;
    for(int i = 0; i <= top ; i++)
        cout<<stack[i]<<" ";
    cout<<endl;
}