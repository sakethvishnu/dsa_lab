#include<iostream>
using namespace std;

int queue[1000],size,front_end = -1, rear_end = -1;
void enqueue();
void dequeue();
void display();
int main(){
    int choice;
    while(1){
        cout<<"1. enqueue\n2. dequeue\n3. display\n4. exit"<<endl;
        cout<<"Enter your choice    :"<<endl;
        cin>>choice;
        switch(choice){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: cout<<"Intiki poi aduko bro nuvu"<<endl;
        }
    }
}   

void enqueue(){
    int enqueue_element;
    cout<<"Enter an elment to be inserted   :"<<endl;
    cin>>enqueue_element;
    if(rear_end == 0 && rear_end == size-1){
        cout<<"Overflow Condition  : The Queue is full . "<<endl;
        return;
    }
    else if(front_end == -1 && rear_end == -1)
        front_end = rear_end = 0;
    else if(rear_end != size-1 && front_end!=0)
        front_end = 0;
    else
        rear_end++;
    queue[rear_end] = enqueue_element;
}

void dequeue(){
    if(front_end == 0 && rear_end == size-1){
        cout<<"Undeflow Condition : The queue is empty ."<<endl;
        return;
    }
    cout<<"Dequeue element is "<<queue[front_end]<<endl;
    if(front_end == rear_end)
        front_end = rear_end = -1;
    else if(front_end == size-1)
        front_end = 0;
    else
        front_end++;
}

void display(){
    if(front_end == -1 && rear_end == -1){
        cout<<"The queue is empty ."<<endl;
        return;
    }
    for(int i = front_end;i<=rear_end;i++)
        cout<<queue[i]<<" ";
    cout<<endl<<endl;
}