#include<iostream>
using namespace std;
void merge(int arr[] , int l, int m,int r , int size);
void mergeSort(int arr[], int l, int r,int size);

void merge(int arr[] , int l, int m,int r , int size){
    int i = l , j = m+1 , k = l;
    int temp[size];
    while(i<=m&&j<=r){
        if(arr[i]<=arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i<=m){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=r){
        temp[k] = arr[j];
        k++;
        j++;
    }
    for(int x = l ; x <= r ; x++)
        arr[x] = temp[x];
}
void mergeSort(int arr[], int l, int r,int size){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr,l,m,size);
        mergeSort(arr,m+1,r,size);
        merge(arr,l,m,r,size);
    }
}
int main(){

    int size,i;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];

    cout<<"Enter "<<size<<" Elements into an array"<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    
    cout<<"Elements before sorting"<<endl;
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    mergeSort(arr, 0 , (size-1) , size);

    cout<<"After sorting the elements are"<<endl;
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}