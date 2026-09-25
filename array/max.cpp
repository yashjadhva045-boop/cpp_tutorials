#include<iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,34,48,2,56};
    int max=arr[0];
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        max=arr[i];
        //max=max(max,arr[i])
       }
    }
    cout<<max;
}