//---------------------------------------------------------------------------

#pragma hdrstop

#include "Course.h"

Course::Course(){
}

Course::~Course(){
}

void Course::setIdentifier(int _id){
	this->id = id;
}

void Course::setName(std::string _name){
	this->name = name;
}
int Course::getIdentifier(){
	return id;
}
std::string Course::getName(){
    return name;
}



//---------------------------------------------------------------------------
#pragma package(smart_init)
