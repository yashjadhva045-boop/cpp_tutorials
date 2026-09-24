#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the Rows :";
    cin>>n;
    int m;
    cout<<"Enter the colum :";
    cin>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}