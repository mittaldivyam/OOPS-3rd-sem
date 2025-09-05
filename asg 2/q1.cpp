#include<iostream>
using namespace std;
class Test{
    int x;
public:
    void set(int a){x=a;}
    void display(){cout<<x<<endl;}
    Test add(Test t){
        Test temp;
        temp.x=x+t.x;
        return temp;
    }
};
int main(){
    Test t1,t2,t3;
    t1.set(5);
    t2.set(10);
    t3=t1.add(t2);
    t3.display();
}
