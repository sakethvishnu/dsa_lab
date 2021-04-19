#include<iostream>
using namespace std;

void quick_sort(int [],int,int);
int partition(int [],int,int);
void quickSort(int array[],int s , int e){
    if(s<e){
    int p = partition(array,s,e);
    quickSort(array,s,(p-1));
    quickSort(array,(p+1),e);
    }
}
int partition(int array[],int s,int e){
    int pivot = array[e];
    int pindex = s, temp;
    for(int i = s ; i < e ; i++){
        if(array[i] <= pivot){
            temp = array[i];
            array[i] = array[pindex];
            array[pindex] = temp;
            pindex++;
        }
    }
    temp = array[e];
        array[e] = array[pindex];
        array[pindex] = temp;
    return pindex;
}

int main(){
    int size;
    cout<<"Enter size of an array   :"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter array elements :"<<endl;
    for(int i = 0 ; i < size ; i++)
        cin>>array[i];
    cout<<"Elements before sorting  :"<<endl;
    for(int i = 0 ; i< size ; i++)
        cout<<array[i]<<" ";
    cout<<endl;

    quickSort(array,0,size-1);

    cout<<"Elements After sorting  :"<<endl;
    for(int i = 0 ; i< size ; i++)
        cout<<array[i]<<" ";
    cout<<endl;
    
}