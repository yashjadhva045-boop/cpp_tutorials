#include<iostream>
using namespace std;
class scooty{   //prant class
 public:
 int name;
int varage;
  virtual void sound(){
    cout<<"Bhroom Bhroom";
}        
private:
int bootspace;
void sound(){
    cout<<"Bhroom Bhroom";
}

};
class bick : public scooty{     //childe class
  int geres;
  void sound(){
    cout<<"Dhroom Dhroom";
}
};
class superbick :public scooty{
    void sound(){
    cout<<"zroom zroom";
}
};

int main()
{
scooty* b = new bick();
  b->sound();
  scooty* c=new superbick();
  c->sound();
  
}