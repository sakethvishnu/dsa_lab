#include<iostream>
using namespace std;

int main(){
    int size,key,flag = -1,i;
    cout<<"Enter size of an array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements "<<endl;
    for(i = 0;i< size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the search element "<<endl;
    cin>>key;

    for(i = 0; i < size ; i++){
        if(key == arr[i]){
            flag = 1;
            break;
        }
    }
    (flag == 1)?cout<<"Element found at index "<<i<<endl:cout<<"Element is not found in the array ."<<endl;
}