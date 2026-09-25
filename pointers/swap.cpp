#include<iostream>
using namespace std;
void swap(int *n, int *m){
    int temp=*n;
    *n=*m;
    *m=temp;

    
}
int main()
{
   int x;
   cout<<"Enter the number :";
   cin>>x;
   int y;
   cout<<"Enter the number :";
   cin>>y;
   cout<<x<<" "<<y<<endl;
   swap(&x,&y); 
   cout<<x<<" "<<y<<endl;
} 

