#include<iostream>
using namespace std;

int main(){
    int size,i,temp,j;
    cout<<"Enter size of an array :"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the elemenets into an array"<<endl;
    for(i = 0 ; i < size ; i++)
        cin>>array[i];
    for(i = 0; i < size ; i++){
        for(j = 0 ; j < size - i ; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i = 0; i< size; i++)
        cout<<array[i]<<" ";
}