#include<iostream>
using namespace std;
class Test{
    void secret(){cout<<"Private function"<<endl;}
public:
    void callSecret(){secret();}
};
int main(){
    Test t;
    t.callSecret();
}
