//---------------------------------------------------------------------------
#include <iostream>
#include <stdlib.h>
#ifndef StudentH
#define StudentH

class Student
{
private:
	int age;
	std::string name;
	std::string surname;
public:
	Student();
	~Student();
	void setIdentifier(int);
	void setName(std::string _name);
	void setSurname(std::string _surname);
	int getIdentifier();
	std::string getName();
	std::string getSurname();
};

//---------------------------------------------------------------------------
#endif
