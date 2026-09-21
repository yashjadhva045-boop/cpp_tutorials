#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){ //or
        cout<<"the give number is divisibal by 5 And 3";
    }
    else{
        cout<<"the give number is not divisibal by 5 And 3";
    }
}