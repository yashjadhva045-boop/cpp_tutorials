#include<iostream>
using namespace std;
class loading{
    public:
   void sum(string a,string b){
     cout<<a+b<<endl;
   }
   void sum(int a,int b){  // compile time polymorphism
     cout<<a+b<<endl;
   }
   void sum(int a,int b,int c){
     cout<<a+b+c<<endl;
   }
};
int main()

{
  loading a;
  a.sum(1,2,3);
  a.sum("Yash","jadhav");
  a.sum(2,3);
}