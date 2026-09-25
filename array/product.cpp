#include<iostream>
using namespace std ;
int main()
{
    int arr[]={13,2,364,48,23,56};
    int pro =1;
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        pro*=arr[i];
    }
    cout<<pro;
}