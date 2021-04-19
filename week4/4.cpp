#include<iostream>
using namespace std;

int main(){
    int array[1000] = {'\0'},hashKey,key,no_of_elements,i,temp,sum = 0,x,y;
    cout<<"Enter no of elements :"<<endl;
    cin>>no_of_elements;
    for(i = 0 ; i < no_of_elements ; i++){
        cout<<"Enter the key Value  :"<<endl;
        cin>>key;

        sum = 0;
        temp = key;
        while(key > 0){
            sum = sum + key %100;
            key /= 100; 
        }
        hashKey = sum;
        key = temp;

        array[hashKey] = key;
        cout<<endl;
    }
    for(i = 0 ; i < 1000 ; i++){
        if(array[i] == '\0')
            continue;
        else
            cout<<"Index = "<<i<<"      Value = "<<array[i]<<endl;
    }
}