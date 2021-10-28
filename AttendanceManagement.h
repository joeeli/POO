//---------------------------------------------------------------------------

#ifndef AttendanceManagementH
#define AttendanceManagementH


#include "Student.h"
#include "Course.h"
#include <iostream>

class AttendanceManagement{


public:
	void takeAttendance(Student* student, Course* course, std::string fecha, bool state);


};
#endif

//---------------------------------------------------------------------------

