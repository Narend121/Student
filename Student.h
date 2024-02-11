#include <string>
#ifndef STUDENT_H
#define STUDENT_H
class Student
{
private:
    /* data */
    int id;
    std::string name;
    int rollno;
public:
    Student(int,std::string,int);
    //~Student();
    void display();
};

#endif
