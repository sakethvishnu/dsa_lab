#include<iostream>
using namespace std;

int main(){
    int size,key,i,flag = -1,low,mid,high;
    cout<<"Enter size of the array "<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the array elements in an sorted order "<<endl;
    for(i = 0;i<size;i++)
        cin>>array[i] ;
    cout<<"Enter the search element "<<endl;
    cin>>key;
    low = 0;
    high = size-1;
    for(i = 0;i<size;i++){
        while(low < high){
            mid = (low+high)/2;
            if(key == array[mid]){
                flag = 1;
                break;
            }
            else if(key < array[mid])
                high = mid-1;
            else if(key > array[mid])
                low= mid+1;
        }
    }
    (flag == 1)?cout<<"Element found at index "<<mid:cout<<"Element is not found in the array"<<endl;
}