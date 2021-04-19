#include<iostream>
using namespace std;

int gcd(int,int);
int main(){
    int a,b;
    cout<<"Enter 2 positive numbers "<<endl;
    cin>>a>>b;
    cout<<"Gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
}
int gcd(int a , int b){
    return (b == 0)?a:gcd(b,a%b);
}