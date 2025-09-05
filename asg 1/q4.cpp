#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++) cout<<i<<" ";
    int i=0;
    for(;i<5;i++) cout<<i<<" ";
    i=0;
    for(;i<5;) {cout<<i<<" "; i++;}
    i=0;
    while(i<5){cout<<i<<" "; i++;}
    i=0;
    do{cout<<i<<" "; i++;}while(i<5);
}
