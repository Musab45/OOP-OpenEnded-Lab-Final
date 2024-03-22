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
	string teacher_password;
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
	void set_teacher_name(string x)
	{
		teacher_name = x;
	}
	string get_teacher_id()
	{
		return teacher_id;
	}
	void set_teacher_id(string x)
	{
		teacher_id = x;
	}

	string get_teacher_password()
	{
		return teacher_password;
	}
	void set_teacher_password(string x)
	{
		teacher_password = x;
	}

	//Methods
	void enroll_course(Course course)
	{
		courses_taught.push_back(course.get_course_name());
		cout << "Course Added Sucessfully!" << endl;
	}
	void remove_course(Course course)
	{
		for (auto it = courses_taught.begin(); it != courses_taught.end(); ++it) {
			if (*it == course.get_course_name()) {
				courses_taught.erase(it);
				cout << "Course removed successfully!" << endl;
				return;
			}
		}
		cout << "Course Not Found";
	}
	void view_courses()
	{
		if (courses_taught.empty()) {
			cout << "No course to remove!";
		}
		for (auto item : courses_taught)
		{
			cout << item << " ";
		}
		cout << endl;
	}

};