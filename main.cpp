#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include "AttendanceManagement.h"
#include "Student.h"
#include "Course.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{
    Student* student = new Student();
    student->setIdentifier(1);
    student->setName("Juan");
    student->setSurname("Perez");

	Course* course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");

	AttendanceManagement* attendanceManagement = new AttendanceManagement();
	attendanceManagement->takeAttendance(student, course, "2021-06-08", true);


	delete student;
	delete course;
    delete attendanceManagement;

	return 0;
}
