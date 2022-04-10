#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;


class Student
{
private:
    int  _identifier;
    string _name;
    string _surname;
public:
    Student(/* args */);
    int getIdentifier() const;
    void setIdentifier(int identifier);
    string getName() const;
    void setName(string name);
    string getSurname() const;
    void setSurname(string surname);
    ~Student();
};




#endif //STUDENT_H