#include<iostream>
using namespace std;

void toh(int num,char source,char aux, char destination);
int main(){
    int num;
    cout<<"Enter the no of disks "<<endl;
    cin>>num;
    toh(num , 'A','B','C');
    return 0;
}

void toh(int num,char source,char aux,char destination){
    if(num==1)
        cout<<"Move Disk "<<num<<" from "<<source<<" To "<<destination<<endl;
    else
        {
            toh(num-1,source,destination,aux);
            cout<<"Move disk "<<num<<" from "<<source<<" to "<<destination<<endl;
            toh(num-1,aux,source,destination);
        }
}