#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;
    int age;

    student(string name,int roll,int age){
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
    void display(){
        cout<<"NAME : "<<name<<"\nROLL : "<<roll<<"\nAGE : "<<age<<endl;
    }
};
int main(){
    student s1("aman",22,21);
    s1.display();
}

