#pragma once
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include"Course.h"

using namespace std;

class Course;

class Student
{
private:
	string student_name;
	string student_id;
	string student_password;
	list<string> enrolled_courses;
public:
	//Constructor

	Student() {}

	Student(string x, string y, string z):
		student_name(x),student_id(y),student_password(z) {}

	//Getters&Setters

	string get_student_name()
	{
		return student_name;
	}
	void set_student_name(string x)
	{
		student_name = x;
	}

	string get_student_id()
	{
		return student_id;
	}
	void set_student_id(string x)
	{
		student_id = x;
	}

	string get_student_password()
	{
		return student_password;
	}
	void set_student_password(string x)
	{
		student_password = x;
	}

	//Methods
	void enroll_course(Student student, Course course)
	{
		enrolled_courses.push_back(course.get_course_name());
		cout << "Course added successfully!" << endl;
	}

	void remove_course(Student student,Course course)
	{
		student.enrolled_courses.remove(course.get_course_name());
		cout << "Course added successfully!" << endl;
	}

	void view_courses()
	{
		for (const string & item : enrolled_courses) 
		{
			cout << item << " ";
		}
		cout << endl;

	}
};

