#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>

using namespace std;

class Course
{
private:
    int  _identifier;
    string _name;
public:
    Course();
    int getIdentifier() const;
    void setIdentifier(int identifier);
    string getName() const;
    void setName(string name);
    virtual ~Course();
};


#endif //COURSE_H