#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n :";
    cin>>n;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i==n-1-j){
                cout<<"*"<<" ";
            }
            else{cout<<"  ";}
        }
        cout<<endl;
    }
}