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



int main()
{
     cricketer c1("Rohit sharma",27000,78.3);
     cricketer *c2 = new cricketer("Ms Dhoni",25000,55.2);

     cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<" "<<endl;

}