#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
      cin>>v[i];
    }
    int x;
    cout<<"Enter the x :";
    cin>>x;

    int occurrence =-1;
    for(int i=0;i<v.size();i++){  // for(int i= v.size()-1;i>=0;i--) this is use for less calculation.
        if(v[i]==x){
            occurrence =i;
        }
    }
    cout<<occurrence;
}