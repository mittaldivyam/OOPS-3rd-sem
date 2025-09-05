#include<iostream>
using namespace std;
class A{
    static int c;
public:
    static void inc(){c++;}
    static void show(){cout<<c<<endl;}
};
int A::c=0;
int main(){
    A::inc();
    A::show();
}
