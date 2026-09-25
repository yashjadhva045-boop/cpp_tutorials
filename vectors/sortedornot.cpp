#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,7,5,6};
     bool sortedflag = true;
     for(int i=1;i<6;i++){
        if(arr[i]<=arr[i-1]){
            sortedflag= false;
        }
     }

     if(sortedflag==true){
        cout<<"The array is sorted";
     }
     else{cout<<"The array is not sorted ";}

}