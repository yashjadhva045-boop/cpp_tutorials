#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int arr[]={1,2,34,48,2,56};
    int mx = INT_MIN;
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
       if(mx<arr[i]){
        
        mx=max(mx,arr[i]);
       }
    }
     int smx=INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]!=mx) smx=max(smx,arr[i]);
     }
    cout<<smx;
}