#include<iostream>
using namespace std;
class Demo{
public:
    Demo(){cout<<"Constructor"<<endl;}
    ~Demo(){cout<<"Destructor"<<endl;}
};
int main(){
    Demo d;
}
