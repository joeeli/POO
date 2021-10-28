//---------------------------------------------------------------------------

#pragma hdrstop

#include "Student.h"


Student::Student(){

}

Student::~Student(){

}

void Student::setIdentifier(int _age){
	this->age = age ;
}

void Student::setName(std::string _name){
	this->name = name;
}

void Student::setSurname(std::string _surname){
	this->surname = surname;
}

int Student::getIdentifier(){
	return age;
}

std::string Student::getName(){
	return name;
}

std::string Student::getSurname(){
	return surname;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
