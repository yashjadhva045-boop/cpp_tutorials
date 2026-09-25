#include<iostream>
using namespace std;
int n=5;
void revers(int arr[]){
    int i=0;
    int j=n-1;
    while (i<j)
    {
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    

}
int main()
{
    int arr[5]={1,2,3,4,5};
   
    int n=5;
    revers (arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}