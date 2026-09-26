#include<iostream>
#include<string>
using namespace std;
class studant{
        public:
         string name;
         int roll_no;
         float cgp;

         studant(string name,int roll_no, float cgp){  //construtors
           this->name=name;
            this->roll_no=roll_no;
            this->cgp=cgp;

         }
         void print(){
    cout<<name<<" "<<roll_no<<" "<<cgp<<" "<<endl;
                 
              }


           int add(){
            return roll_no+cgp;
           }   
    };


int main(){
      studant s1("Shubham",3,6.8);
      
        
      studant s2("Yash",4,6.7);
     

      s1.print();
     s2.print();
     cout<<s1.add()<<endl;
    cout<<s2.add();

   
    
}