#include<iostream>
#include<string>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    cricketer(string name , int runs, float avg){
             this->name=name;
             this->runs=runs;
             this->avg=avg;

    }
    
};
void change(cricketer*c){
    c->runs=1234;  //(*c).runs= 1234;
}


int main()
{
     cricketer c1("Rohit sharma",27000,78.3);
     cricketer c2("Ms Dhoni",25000,55.2);
cout<<c1.runs<<endl;
     change(&c1);
     cout<<c1.runs<<endl;

     cricketer *p1=&c1;
     cout<<(*p1).runs<<endl;
     cout<<c1.avg<<endl;
    (*p1).avg=12.3;     //p1->avg is also pointer.
    cout<<c1.avg<<endl;
}