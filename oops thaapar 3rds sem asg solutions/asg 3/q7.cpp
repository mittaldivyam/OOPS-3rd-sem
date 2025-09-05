#include<iostream>
using namespace std;
class A{
    int x;
public:
    A(int a){x=a;}
    friend class B;
};
class B{
public:
    void show(A a){cout<<a.x<<endl;}
};
int main(){
    A a(10);
    B b;
    b.show(a);
}
