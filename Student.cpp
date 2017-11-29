#include "Student.h"
#include <string>
#include <stdio.h>
#include <sstream>
#include <numeric>
#include <iostream>
Student::Student(std::string fn, std::string ln, int gy, Major major) {
  _first_name = fn;
  _last_name = ln;
   _grad_year = gy;
  _major = major;
  std::vector<float> _grades;
}
Student::~Student(){}; /*does not do anything*/

float Student::getGpa(){
	return accumulate(_grades.begin(), _grades.end(),0.00)/_grades.size(); /* accumulate starts at the 0.00, then add all the grades starting from 1st to the end */
}
	
void Student::addGrade(float grade) {
	_grades.push_back(grade);
}

std::string Student::majorString(Major m){
	switch(m){
		case Major::EE: return "EE";
		case Major::ME: return "ME";
		case Major::CE: return "CE";
		case Major::CHE: return "CHE";
		case Major::BSE: return "BSE";
		case Major::ART: return "ART";
		case Major::ARCH: return "ARCH";
		default: return "Error";
	}
	return 0;
}

		
void Student::printInfo(){
	printf("%s %s\n%s %s\nGPA: %.2f \n", _last_name.c_str(),_first_name.c_str(),majorString(_major).c_str(),std::to_string(_grad_year).c_str(),getGpa());
}
