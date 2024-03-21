#pragma once
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include"Course.h"

using namespace std;

class Course;
class Student;

class Teacher
{
private:
	string teacher_name;
	string teacher_id;
	list<string> courses_taught;
public:
	//Constructor
	Teacher() {}
	Teacher(string x, string y) :
		teacher_name(x), teacher_id(y) {}

	//Getters
	string get_teacher_name()
	{
		return teacher_name;
	}
	string get_teacher_id()
	{
		return teacher_id;
	}

	//Methods
	void enroll_course(Course course)
	{
		courses_taught.push_back(course.get_course_name());
	}

	void remove_course(Course course)
	{
		courses_taught.remove(course.get_course_name());
	}

	void view_courses()
	{
		for (string obj : courses_taught)
		{
			cout << obj << endl;
		}
	}
};