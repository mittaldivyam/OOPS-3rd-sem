#include<iostream>
using namespace std;
int x=50;
class A{
    static int s;
public:
    void show();
    static void showStatic();
};
int A::s=100;
void A::show(){cout<<s<<endl;}
void A::showStatic(){cout<<s<<endl;}
int main(){
    int x=10;
    cout<<::x<<endl;
    A a;
    a.show();
    A::showStatic();
}
