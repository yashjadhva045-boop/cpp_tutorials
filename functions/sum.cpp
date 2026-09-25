#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main()
{
    int n;
    cout<<"Enter the frist number :";
    cin>>n;
    int m;
    cout<<"Enter the second number :";
    cin>>m;
    int x= sum(n,m);
    cout<<"The sum of two number is :"<<x;
}