#include<iostream>
using namespace std;
class Rectangle{
    int l,b;
public:
    Rectangle(){l=0;b=0;}
    Rectangle(int x,int y){l=x;b=y;}
    Rectangle(int x){l=b=x;}
    int area(){return l*b;}
};
int main(){
    Rectangle r1,r2(4,5),r3(6);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
}
