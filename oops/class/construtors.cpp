#include<iostream>
#include<string>
using namespace std;
class studant{
        public:
         string name;
         int roll_no;
         float cgp;

         studant(string a,int r, float c){  //construtors
            name=a;
            roll_no=r;
            cgp=c;

         }
    };
void print(studant s){
    cout<<s.name<<" "<<s.roll_no<<" "<<s.cgp<<" "<<endl;
}

int main(){
      studant s1("Shubham",3,6.8);
      
        
      studant s2("Yash",4,6.7);
     

      print(s1);
      print(s2);

   
    
}