//---------------------------------------------------------------------------


#pragma hdrstop

#include "AttendanceManagement.h"

#include "Student.h"
#include "Course.h"
#include <iostream>
#include <fstream>
#include <cstring>
//


		void AttendanceManagement::takeAttendance(Student* student, Course* course, std::string fecha, bool state){
            ofstream outputFile;
            ifstream outputFileExists;
            outputFileExists.open("attendance.csv");

            if(!outputFileExists){
                outputFile.open("attendance.csv",fstream::in | fstream::out | fstream::trunc);
                outputFile <<  "Id de Estudiante;Nombre/s;Apellido/s;Id de Materia;Nombre de Materia;Marca temporal;Presente" ;
                outputFile << "\n";
                outputFile << student->getIdentifier();
                outputFile << ";"+student->getName()+";";
                outputFile << student->getSurname()+";";
                outputFile << course->getIdentifier();
                outputFile << ";"+course->getName()+";";
                outputFile << fecha+";";
                outputFile << state;
                outputFile.close();
            }else{
                outputFile.open("attendance.csv",fstream::in | fstream::out | fstream::app);
                outputFile << "\n";
                outputFile << student->getIdentifier();
                outputFile << ";"+student->getName()+";";
                outputFile << student->getSurname()+";";
                outputFile << course->getIdentifier();
                outputFile << ";"+course->getName()+";";
                outputFile << fecha+";";
                outputFile << state;
                outputFile.close();
            }


        }




//---------------------------------------------------------------------------
#pragma package(smart_init)
