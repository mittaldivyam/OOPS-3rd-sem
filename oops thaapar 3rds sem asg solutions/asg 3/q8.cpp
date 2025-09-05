#include<iostream>
using namespace std;
int main(){
    int *p=new int(5);
    cout<<*p<<endl;
    delete p;
    int *arr=new int[3];
    for(int i=0;i<3;i++) arr[i]=i+1;
    for(int i=0;i<3;i++) cout<<arr[i]<<" ";
    delete[] arr;
}
