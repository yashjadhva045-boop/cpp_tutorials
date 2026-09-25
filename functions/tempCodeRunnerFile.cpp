#include<iostream>
using namespace std;
int fact(int x){
    int y=1;
    for(int i=1;i<=x;i++){
        y*=i;
    }
    return y;
}
int main()
{
    int n;
    cout<<"Enter the n";
    cin>>n;
    int r;
    cout<<"Enter the r ";
    cin>>r;
    int a=fact(n);
    int b= fact(r);
    int c = fact(n-r);
    cout<<a/(b*c);

}