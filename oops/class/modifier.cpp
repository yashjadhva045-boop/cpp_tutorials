#include<iostream>
using namespace std;
class studant{
    public:
    string name ;
    int r;
   
    studant(){

    }
    studant(string name ,int r, float marks){
             this->name=name;
             this->r=r;
             this->marks=marks;

    }
    void dispaly(){
        cout<<this->name<<" "<<this->r<<" "<<this->marks<<" "<<endl;
    }
    int getter(){
        return marks;
    }
    void setter(float m){
        marks =m;
    }
    

     private:
    int marks;
    
};
int main()
{
   studant s("Yash",3,23.4);
   s.dispaly();
   s.setter(99.99);
    cout<<s.getter();
}