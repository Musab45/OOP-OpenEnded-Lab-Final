#pragma once
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include"Course.h"
class Teacher
{

private:
		string Teacher_name;
		string Teacher_id;
		list<string> courses_taught;
public:
		//Constructor
	Teacher(string x, string y) :Teacher_name(x), Teacher_id(y) {}

		//Getters
		string get_Teacher_name()
		{
			return Teacher_name;
		}
		string get_Teacher_id()
		{
			return Teacher_id;
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



