#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int array[1000] = {'\0'},hashKey,i,key,no_of_elments,temp,count = 0,x;
    cout<<"Enter the no of elements to be inserted  :"<<endl;
    cin>>no_of_elments;
    for(i=0;i<no_of_elments;i++){
        cout<<"Enter the key value  :"<<endl;
        cin>>key;
        hashKey = key*key;
        temp = hashKey;
        count = 0;
        while(hashKey!= 0){
            hashKey /= 10;
            count++;
        }
        hashKey = temp;
        x = pow(10,count-1);
        hashKey = hashKey % x;
        hashKey = hashKey/10;
        array[hashKey] = key;
        cout<<endl;
    }
    for(i = 0; i < 1000 ; i++){
        if(array[i] == 0)
            continue;
        else
            cout<<"Index = "<<i<<"      Value = "<<array[i]<<endl;
    }
}