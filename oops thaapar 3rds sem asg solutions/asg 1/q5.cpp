#include<iostream>
using namespace std;
struct Student{
    string name,degree,hostel;
    int roll;
    float cgpa;
    void addDetails(string n,int r,string d,string h,float c){
        name=n; roll=r; degree=d; hostel=h; cgpa=c;
    }
    void updateDetails(string n,string d){name=n; degree=d;}
    void updateCGPA(float c){cgpa=c;}
    void updateHostel(string h){hostel=h;}
    void displayDetails(){
        cout<<name<<" "<<roll<<" "<<degree<<" "<<hostel<<" "<<cgpa<<endl;
    }
};
int main(){
    Student s;
    s.addDetails("Amit",1,"BTech","A",8.1);
    s.displayDetails();
    s.updateCGPA(9.0);
    s.displayDetails();
}
