#include<iostream>
using namespace std;

int arr[100] = {'\0'},j,size;
void postOrder(int arr[],int j){
    if(arr[2*j] != '\0')
        postOrder(arr,2*j);
    if(arr[2*j+1] != '\0')
        postOrder(arr,2*j+1);
    cout<<arr[j]<<" ";
}

int main(){
    cout<<"Enter size of an array"<<endl;
    cin>>size;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"PostOrder :"<<endl;
    postOrder(arr,1);
}