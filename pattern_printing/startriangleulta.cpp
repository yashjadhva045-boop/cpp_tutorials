#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the Rows or colum  :";
    cin>>n;
    

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)  //j<=n-i+1
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}