#include<iostream>
using namespace std ;
int main()
{
    int arr[]={13,2,364,48,23,56};
    int sum =0;
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}