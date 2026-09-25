#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
      cin>>v[i];
    }
     
    int sum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            sum+=v[i];
        }
        else{
            sum-=v[i];
        }
    }
    cout<<sum;
}