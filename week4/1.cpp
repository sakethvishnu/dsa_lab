#include<iostream>
using namespace std;

int main(){
    int hashkey,key,no_of_elements,i,table_size;
    cout<<"Enter the no of elements :"<<endl;
    cin>>no_of_elements;

    cout<<"Enter table size :"<<endl;
    cin>>table_size;
    int array[table_size] = {'\0'};

    for(i = 0; i < no_of_elements ; i++){
        cout<<"Enter the key Value  :"<<endl;
        cin>>key;
        hashkey = key%table_size;
        array[hashkey] = key;
    }

    for(i = 0;i < table_size ; i++){
        if(array[i] == '\0')
            continue;
        else
            cout<<"Index = "<<i<<"      Value = "<<array[i]<<endl;
    }
}