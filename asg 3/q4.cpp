#include<iostream>
using namespace std;
class Test{
    int x;
public:
    void set(int a){x=a;}
    void show(){cout<<x<<endl;}
    void compare(Test t){if(this->x>t.x) cout<<"Greater"<<endl; else cout<<"Smaller"<<endl;}
};
int main(){
    Test t1,t2,*p;
    t1.set(10);
    t2.set(20);
    p=&t1;
    p->show();
    t1.compare(t2);
}
