#include<iostream>
using namespace std;
class Complex{
    float real,img;
public:
    void set(float r,float i){real=r; img=i;}
    void display(){cout<<real<<"+"<<img<<"i"<<endl;}
    Complex sum(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.set(2,3);
    c2.set(4,5);
    c3=c1.sum(c2);
    c3.display();
}
