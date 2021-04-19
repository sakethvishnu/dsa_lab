#include<iostream>
using namespace std;

int arr[100] = {'\0'},j,size;
void preorder(int arr[],int j){
    cout<<arr[j]<<" ";
    if(arr[2*j]!='\0')
        preorder(arr,2*j);
    if(arr[2*j+1] != '\0')
        preorder(arr,2*j+1);
}

int main(){
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"Preorder :"<<endl;
    preorder(arr,1);
}