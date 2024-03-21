#pragma once
#include<iostream>
#include<string>
#include<list>
#include<vector>
#include"Student.h"

using namespace std;
class Student;

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
	void add_student()
	{
		string student_name;
		cout << "Enter the name of the student you want to add: ";
		cin >> student_name;
		enrolled_students.push_back(student_name);
		cout << "Student added successfully!" << endl;
		
	}

	void remove_student()
	{
		string student_name;
		cout << "Enter the name of the student you want to remove: ";
		cin >> student_name;
		enrolled_students.remove(student_name);
		cout << "Student removed successfully!" << endl;
		
	}

	void view_students()
	{
		for (string obj : enrolled_students)
		{
			cout << obj << endl;
		}
	}
};

