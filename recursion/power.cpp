#include<iostream>
using namespace std;
int power(int x,int y){
    if(y==0) return 1;
    return x* power(x,y-1);
}
int main()
{
    int a;
    cout<<"Enter the base :";
    cin>>a;
    int b;
    cout<<"Enter the power :";
    cin>>b;
     cout<<power(a,b);
}