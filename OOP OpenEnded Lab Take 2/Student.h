#pragma once
#include<iostream>
#include<string>
#include<fstream>
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
	void enroll_course(Course course)
	{
		enrolled_courses.push_back(course.get_course_name());
		cout << "Course added successfully!" << endl;
	}

	void remove_course(Course course)
	{
		for (auto it = enrolled_courses.begin(); it != enrolled_courses.end(); ++it) {
			if (*it == course.get_course_name()){
				enrolled_courses.erase(it);
				cout << "Course removed successfully!" << endl;
				return;
			}
		}
		cout << "Course Not Found";
	}

	void view_courses()
	{
		if (enrolled_courses.empty()) {
			cout << "List is Empty";
		}
		for (auto item : enrolled_courses) 
		{
			cout << item << " ";
		}
		cout << endl;

	}
	//writing data in files
	/*void writeToFile(ofstream& outFile) {
		outFile << student_id << "  " << student_name << "  ";
		for (string course : enrolled_courses) {
			outFile << course;
		}
		outFile << endl;
	}
	void readFromFile(ifstream& inFile) {
		inFile >> student_id >> student_name;
	}*/
};

