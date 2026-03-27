#include<iostream>
using namespace std;
class Person
{ string name;int age;
  public:
  Person(){
    cout<<"\n person default constructor";
    name="user";age=10;
}
Person(string na,int ag){
    cout<<"\n person parametrized constructor";
    name=na;age=ag;
}
void display(){
    cout<<"\n name= "<<name<<"\n age= "<<age;
}

};
class Student:public Person{
    string rollno;
    public:
    
}