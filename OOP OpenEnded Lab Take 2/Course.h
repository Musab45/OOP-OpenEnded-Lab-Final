#pragma once
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include"Student.h"

using namespace std;

class Course
{
private:
	string course_id;
	string course_name;
	list<string> enrolled_students;
public:
	//Constructor
	Course(string x, string y) :
		course_name(x), course_id(y) {}

	//Getters
	string get_course_name()
	{
		return course_name;
	} 

	//Methods
	void add_student(Student student)
	{
		enrolled_students.push_back(student.get_student_name());
	}

	void remove_student(Student student)
	{
		enrolled_students.remove(student.get_student_name());
	}

	void view_students()
	{
		for (string obj : enrolled_students)
		{
			cout << obj << endl;
		}
	}
};

