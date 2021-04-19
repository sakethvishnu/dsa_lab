// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     int x,y,num;
//     stack <int>s;
//     cout<<"Enter an number to calculate the factorial   :"<<endl;
//     cin>>num;
//     for(int i=num;i>0;i--)
//         s.push(i);
//     for(int i = num;i>0;i--){
//         x = s.top();
//         s.pop();
//         y = s.top();
//         s.pop();
//         s.push(x*y);
//     }
//     cout<<"The factorial of "<<num<<" is    :"<<s.top();
// }

#include<iostream>
using namespace std;
int stack[100],size,top = -1;

//declaring 3 function push pop and display.
void push(int);
int pop();
int display();

int main(){
    int num,i,x,y;

    cout<<"Enter size of the stack: ";
    cin>>size;

    cout<<"Enter the no to find the factorial: ";
    cin>>num;

    if(num==0){
        cout<<"The factorial of given no is: 1"<<endl;
    }
    else{
        for(i=num;i>0;i--)
            push(i);
        for(i=num;i>1;i--){
            x = pop();
            y = pop();
            push(x*y);
        }
        cout<<"The factorial of given no is: "<<display()<<endl;
    }
    return 0;
}

//Defining the push function.
void push(int value){
    top++;
    stack[top] = value;
}

//defifing pop function.
int pop(){
    int a = stack[top];
    top--;
    return a;
}

//defining the display function.
int display(){
    return stack[top];
}
