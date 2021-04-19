// Fibonacii search of an element.
#include<iostream>
using namespace std;

int main(){
    int array[1000],size,index,fm,fm1 = 1 , fm2 = 0, offset = -1,key,flag = -1;
    cout<<"Enter sizze of an array"<<endl;
    cin>>size;
    cout<<"Enter array elements"<<endl;
    for(int i = 0 ; i < size; i++)
        cin>>array[i];
    cout<<"Enter search element"<<endl;
    cin>>key;
    fm = fm1 + fm2;
    while(fm  < size)
    {
        fm1 = fm;
        fm2 = fm1;
        fm = fm1 + fm2;
    }

    while(fm > 1){
        index = (offset+fm2<size-1) ? (offset+fm2) : (size-1);
        if(array[index]<key){
            offset = index;
            fm = fm1;
            fm1 = fm2;
            fm2 = fm - fm1;
        }

        if(array[index] == key){
            flag = 1;
            cout<<"Element is found at :"<<index<<endl;
            break;
        }

        if(array[index] > key){
            fm = fm2;
            fm1 = fm1 - fm;
            fm2 = fm - fm1;
        }
    }
    (flag == 1)?cout<<"Element is found at :"<<index<<endl : cout<<"Element not found in the array"<<endl;
}