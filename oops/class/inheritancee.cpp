#include<iostream>
using namespace std;
class vehical{   //prant class
 public:
 int name;
int varage;        
private:
int bootspace;

};
class twowheeler : public vehical{     //childe class
  int geres;
};
class fourwheeler : public vehical{     //childe class
  int geres;
};
class turck : public fourwheeler{     //grandchilde class
  int geres;
};

int main()
{

}