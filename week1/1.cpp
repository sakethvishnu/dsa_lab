#include<iostream>
using namespace std;

int fact_rec(int);
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact_rec(n)<<endl;
}

int fact_rec(int  num){
    return (num>0)?num*fact_rec(num-1):1;
}