#include<iostream>
using namespace std;
class fraction{
    public:
    int num;
    int den;
    fraction(int num , int den){
        this->num=num;
        this->den=den;

    }
 void disaply(){
    cout<<this->num<<" / "<<this->den<<" "<<endl;
 }  
 fraction operator+(fraction f){
    int newNum= this->num*f.den + f.num*this->num;
    int newDen = this->den*f.den;
    fraction ans(newNum,newDen);
    return ans;
 }
 fraction operator-(fraction f){
    int newNum= this->num*f.den - f.num*this->num;
    int newDen = this->den*f.den;
    fraction ans(newNum,newDen);
    return ans;
 }
 fraction operator*(fraction f){
    int newNum= this->num*f.num;
    int newDen = this->den*f.den;
    fraction ans(newNum,newDen);
    return ans;
 }



};
int main()
{
   fraction f1(1,2);
   fraction f2(2,3);
   f1.disaply();
   f2.disaply();
   fraction f3= f1+f2;
   f3.disaply();
   fraction f4=f1-f2;
   f4.disaply();
   
}