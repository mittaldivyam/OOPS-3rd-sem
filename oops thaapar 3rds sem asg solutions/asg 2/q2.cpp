#include<iostream>
using namespace std;
class Rect{
    int l,b;
public:
    void set(int x,int y){l=x;b=y;}
    int area(){return l*b;}
};
int main(){
    Rect r[3];
    r[0].set(2,3);
    r[1].set(4,5);
    r[2].set(6,7);
    for(int i=0;i<3;i++) cout<<r[i].area()<<endl;
}
