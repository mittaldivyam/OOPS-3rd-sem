#include<iostream>
using namespace std;
int x=5;
class A{
public:
    static int x;
};
int A::x=10;
int main(){
    int x=20;
    cout<<x<<" "<<A::x<<" "<<::x;
}
