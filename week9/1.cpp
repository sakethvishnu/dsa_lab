#include<iostream>
using namespace std;
int j,arr[100]={'\0'},s;
void inorder(int arr[], int j){
    if(arr[2*j] != '\0')
        inorder(arr,2*j);
    cout<<arr[j]<<" ";
    if(arr[2*j+1]!='\0')
        inorder(arr,2*j+1);
}
int main(){
    int size;
    cout<<"Enter the size of an array   :"<<endl;
    cin>>size;
    cout<<"Enter the elements   :"<<endl;
    for(int i = 0 ; i < size ; i++)
        cin>>arr[i];
    cout<<"Inorder  :"<<endl;
    inorder(arr,1);
}