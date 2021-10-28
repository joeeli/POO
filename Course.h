//---------------------------------------------------------------------------
#include <iostream>
#ifndef CourseH
#define CourseH

class Course{
private:
	int id;
	std::string name;
public:
	Course();
	~Course();
	void setIdentifier(int);
	void setName(std::string);
	int getIdentifier();
	std::string getName();

};

//---------------------------------------------------------------------------
#endif
