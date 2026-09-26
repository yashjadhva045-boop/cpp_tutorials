#include<iostream>
#include<string>
using namespace std;
class studant{
        public:
         string name;
         int roll_no;
         float cgp;
    };
void print(studant s){
    cout<<s.name<<" "<<s.roll_no<<" "<<s.cgp<<" "<<endl;
}

int main(){
      studant s1;
      s1.name = "Yash";
      s1.roll_no = 3;
      s1.cgp = 6.5;
        
      studant s2;
      s2.name="Shubham";
      s2.roll_no =4;
      s2.cgp =8.2;

      print(s1);
      print(s2);

   
    
}