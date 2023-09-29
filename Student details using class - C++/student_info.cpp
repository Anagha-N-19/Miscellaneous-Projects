#include<iostream>

using namespace std;

class Student{
public:
    string name;
    string rollno;
    int age;
    float cgpa;
    void printer(){
    cout<<endl<<"Name: "<<name<<endl<<"Roll no: "<<rollno<<endl<<"Age: "<<age<<endl<<"CGPA: "<<cgpa<<endl;
    }
    void setter(string n,string r,int a, float cgpa);
};
void Student::setter(string n,string r,int a, float c){
    name = n;
    age = a;
    rollno = r;
    cgpa = c;
    }

int main(){
    Student s;
    string name;
    string rollno;
    int age;
    float cgpa;
    cout<<"STUDENT DETAILS WITH CLASSES AND OBJECTS"<<endl<<endl;
    cout<<endl<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    s.setter(name, rollno, age, cgpa);
    s.printer();
    return 0;
}
