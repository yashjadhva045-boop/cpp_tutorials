#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the Rows or colum  :";
    cin>>n;
    int a=1;

    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++)  //j<=n-i+1
        {
           if((i+j)%2==0){
            cout<<1<<" ";
           }
           else{cout<<0<<" ";}
        }
        cout<<endl;
    }
}
