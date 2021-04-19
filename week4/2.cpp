#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int hashKey,key,i,table_size,no_of_elements,array[1000] = {'\0'};
    cout<<"Enter table size"<<endl;
    cin>>table_size;
    cout<<"Enter the no of elements"<<endl;
    cin>>no_of_elements;
    for(i=0;i<no_of_elements;i++){
        cout<<"Enter the key value  :"<<endl;
        cin>>key;
        hashKey = floor(table_size*key*0.618032);
        array[hashKey] = key;
        cout<<endl;
    }
    for(i = 0;i < 1000 ; i++){
        if(array[i] == '\0')
            continue;
        else
            cout<<"Index = "<<i<<"      Value = "<<array[i]<<endl;
    }
}