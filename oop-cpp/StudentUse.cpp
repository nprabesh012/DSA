#include <iostream>
#include "Student.cpp"
using namespace std;

int main(){

	// creating objects statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	// accessing the properties using dot
	s1.age = 24;
	s1.rollNumber = 101;

	cout << s1.age << endl;
	cout << s1.rollNumber << endl;


	// creating objects dynamically
	Student *s6 = new Student;
	
	// accessing the properties using dot
	// 1st dereference and then access
	(*s6).age = 23;
	(*s6).rollNumber = 104;

	// accessing the properties using arrow
	// syntactic sugar [ bar-> member is same as (*bar).member]
	s6 -> age = 23;
	s6 -> rollNumber = 104;

}