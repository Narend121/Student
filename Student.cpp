#include<iostream>
#include<string>
#include "Student.h"

Student::Student(int id,std::string name, int rollno) : id(id),name(name),rollno(rollno)
{

}
void Student::display()
{
    std::cout<<"id:"<<id<<" "<<"name:"<<name<<" "<<"rollno:"<<rollno;
}