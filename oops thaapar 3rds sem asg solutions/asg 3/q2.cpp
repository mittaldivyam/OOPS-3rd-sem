#include<iostream>
using namespace std;
class Rectangle{
    int l,b;
public:
    Rectangle(int x=0,int y=0){l=x;b=y;}
    int area(){return l*b;}
    ~Rectangle(){}
};
int main(){
    Rectangle r[3]={Rectangle(),Rectangle(4,5),Rectangle(6)};
    for(int i=0;i<3;i++) cout<<r[i].area()<<endl;
}
