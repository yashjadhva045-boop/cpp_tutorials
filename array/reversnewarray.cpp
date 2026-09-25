#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5];
    int n=5;
    for(int i=0;i<5;i++){
     int  j=n-1-i;
     brr[j]=arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<brr[i]<<" ";
    }
}