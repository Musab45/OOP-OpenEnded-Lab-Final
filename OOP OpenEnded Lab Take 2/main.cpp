#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<fstream>
#include "Student.h"
#include "Course.h"
#include "Teacher.h"

using namespace std;
class Student;
class Course;
class Teacher;

//Object Creation
Student student1;
Student student2;
Student student3;
Student student4;
Student student5;

Teacher teacher1;
Teacher teacher2;
Teacher teacher3;

Course course1;
Course course2;
Course course3;

//Funtions
//For Student

void create_student_account()
{
	string id;
	string name;
	string password;
	
	cout<<"Enter Student ID: ";
	cin >> id;
	cout<<"Enter Student Name: ";
	cin >> name;
	cout<<"Enter Student Password: ";
	cin >> password;
	if (id == "001")
	{
		student1.set_student_id(id);
		student1.set_student_name(name);
		student1.set_student_password(password);
	}
	else if(id=="002")
	{
		student2.set_student_id(id);
		student2.set_student_name(name);
		student2.set_student_password(password);
	}
	else if(id=="003")
	{
		student3.set_student_id(id);
		student3.set_student_name(name);
		student3.set_student_password(password);
	}
	else if(id=="004")
	{
		student4.set_student_id(id);
		student4.set_student_name(name);
		student4.set_student_password(password);
	}
	else if (id == "005")
	{
		student5.set_student_id(id);
		student5.set_student_name(name);
		student5.set_student_password(password);
	}
	else
	{
		cout << "Invalid ID" << endl;
	}
}

void enroll_course(Student student, Course course)
{
	student.enroll_course(course);
	course.add_student(student.get_student_name());
}

void remove_course(Student student, Course course)
{
	student.remove_course(course);
	course.remove_student(student.get_student_name());
}

int main()
{
	char menu_choice;
	char student_portal_choice;
	char course_portal_choice;
	do
	{
		cout << "1. Student Portal" << endl;
		cout << "2. Course Portal" << endl;
		cout << "Choice: ";
		cin >> menu_choice;
		switch (menu_choice)
		{
		case'1':
			cout << "Student Portal" << endl;
			cout<<"1. Create Student Account"<<endl;
			cout<<"2. Login"<<endl;	
			cout<<"3. Logout"<<endl;
			cout << "Choice: ";
			cin >> student_portal_choice;
			switch (student_portal_choice)
			{
			case'1':
				create_student_account();
				break;
			case'2':
				cout<<"Login Not made yet"<<endl;
				break;
			case'3':
				
				break;
			}
			
			break;
		case'2':
			cout << "Course Portal" << endl;
			cout << "1.Add Student" << endl;
			cout << "2.Display Students" << endl;
			cout << "3.Remove Student" << endl;
			cout << "Choice: ";
			cin >> course_portal_choice;
			switch (course_portal_choice)
			{
			case'1':
				//cs1.add_student(/*student*/);
				break;
			case'2':
				//cs1.view_students();
				break;
			case'3':
				break;
			}

			break;
		}
	} while (menu_choice != '4');
}