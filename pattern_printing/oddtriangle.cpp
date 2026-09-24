#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the Rows or colum  :";
    cin>>n;
    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)  //j<=n-i+1
        {
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}

// using eaxtra variable int a=1 ; cout<<a<<" "; a+=2;