#include<iostream>
using namespace std;
int fibo(int m){
    if(m==1 || m==2) return 1;
    return fibo(m-1)+fibo(m-2);
}
int main()
{
    int n;
    cout<<"Enter the n ";
    cin>>n;
    cout<<fibo(n);
}