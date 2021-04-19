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
    for(i=1;i<size;i++){
        temp = array[i];
        for(j = i;j>0&&temp<array[j-1];j--)
            array[j] = array[j-1];
        array[j] = temp;
    }
    for(i = 0; i< size; i++)
        cout<<array[i]<<" ";
}