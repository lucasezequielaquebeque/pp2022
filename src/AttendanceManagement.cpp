#include "../include/AttendanceManagement.hpp"
#include <filesystem>
AttendanceManagement::AttendanceManagement()
{

}
AttendanceManagement::~AttendanceManagement()
 {

 }
void AttendanceManagement::takeAttendance (Student * studen, Course * course, string dateTime, bool state)
{
    ifstream open_file("attendance.csv");
    bool flag=open_file.good();
    ofstream list("attendance.csv",ios::app);
    bool archivo_existe(string nombre);
    if(!flag)
    {
        list<<"IDENTIFICADOR,"
            <<"NOMBRE,"
            <<"APELLIDO,"
            <<"CURSO,"
            <<"FECHA,"
            <<"ESTADO,\n";    
       
    }
     //data
        list<<studen->getIdentifier()<<","<<studen->getName()<<","<<studen->getSurname()<<course->getName()<<","<<dateTime<<","<<state<<endl;    
      list.close();  
}
void AttendanceManagement::showAttendance()const 
{

}