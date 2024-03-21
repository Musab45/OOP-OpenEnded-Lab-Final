#pragma once
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include"Course.h"
using namespace std;
class Student
{
private:
	string student_name;
	string student_id;
	list<string> enrolled_courses;
public:
	//Constructor
	Student(string x, string y):
		student_name(x),student_id(y) {}

	//Getters
	string get_student_name()
	{
		return student_name;
	}
	string get_student_id()
	{
		return student_id;
	}

	//Methods
	void enroll_course(Course course)
	{
		enrolled_courses.push_back(course.get_course_name());
	}

	void remove_course(Course course)
	{
		enrolled_courses.remove(course.get_course_name());
	}

	void view_courses()
	{
		for (string obj : enrolled_courses)
		{
			cout << obj << endl;
		}
	}
};

