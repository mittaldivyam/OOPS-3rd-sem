#include<iostream>
using namespace std;
class Student{
    string name,degree,hostel;
    int roll;
    float cgpa;
    void secretUpdate(string d){degree=d;}
public:
    void addDetails(string n,int r,string d,string h,float c){
        name=n; roll=r; degree=d; hostel=h; cgpa=c;
    }
    void updateCGPA(float c){cgpa=c;}
    void updateHostel(string h){hostel=h;}
    void callSecretUpdate(string d){secretUpdate(d);}
    void displayDetails(){
        cout<<name<<" "<<roll<<" "<<degree<<" "<<hostel<<" "<<cgpa<<endl;
    }
};
int main(){
    Student s;
    s.addDetails("Amit",1,"BTech","A",8.1);
    s.displayDetails();
    s.callSecretUpdate("MTech");
    s.displayDetails();
}
