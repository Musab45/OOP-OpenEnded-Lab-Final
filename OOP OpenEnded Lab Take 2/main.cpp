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

//Choice Variables
char menu_choice;
char student_portal_choice;
char course_portal_choice;
char course_enrollment_choice;

//Object Creation
Student student1;
Student student2;
Student student3;
Student student4;
Student student5;
//For login data transfer
Student active_student;

Teacher teacher1;
Teacher teacher2;
Teacher teacher3;

Course course1 = {"CS101", "Introduction to Computer Science"};
Course course2 = {"CS102", "Data Structures"};
Course course3 = {"CS103", "Algorithms"};

//Funtions
//For Student

//create account
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
	student.enroll_course(student, course);
	course.add_student(student.get_student_name());
}

void remove_course(Student student, Course course)
{
	student.remove_course(student, course);
	course.remove_student(student.get_student_name());
}


//Student Portal Menu
void student_portal_menu()
{
	char student_portal_choice;
	do
	{
		cout << "1. Enroll Course" << endl;
		cout << "2. Remove Course" << endl;
		cout << "3. View Courses" << endl;
		cout << "4. Logout" << endl;
		cout << "Choice: ";
		cin >> student_portal_choice;
		switch (student_portal_choice)
		{
		case'1':
			cout << "Select coursse to enroll to:" << endl;
			cout << "1. Introduction to Computer Sciences" << endl;
			cout << "2. Data Structures" << endl;
			cout << "3. Algorithms" << endl;
			cout << "Choice: ";
			cin >> course_enrollment_choice;
			switch (course_enrollment_choice)
			{
			case'1':
				enroll_course(active_student, course1);
				break;
			case'2':
				enroll_course(active_student, course2);
				break;
			case'3':
				enroll_course(active_student, course3);
				break;
			default:
				cout<< "Invalid Choice" << endl;
			}
			break;
		case'2':
			cout << "Select coursse to remove to:" << endl;
			cout << "1. Introduction to Computer Sciences" << endl;
			cout << "2. Data Structures" << endl;
			cout << "3. Algorithms" << endl;
			cout << "Choice: ";
			cin >> course_enrollment_choice;
			switch (course_enrollment_choice)
			{
			case'1':
				enroll_course(active_student, course1);
				break;
			case'2':
				enroll_course(active_student, course2);
				break;
			case'3':
				enroll_course(active_student, course3);
				break;
			default:
				cout << "Invalid Choice" << endl;
			}
			break;
		case'3':
			active_student.view_courses();
			break;
		}
	} while (student_portal_choice != '4');
}

//Login
void login(string name, string password)
{
	bool login_succesful = false;
	if (name == student1.get_student_name() && password == student1.get_student_password())
	{
		active_student = student1;
		login_succesful = true;
	}
	else if (name == student2.get_student_name() && password == student2.get_student_password())
	{
		active_student = student2;
		login_succesful = true;
	}
	else if (name == student3.get_student_name() && password == student3.get_student_password())
	{
		active_student = student3;
		login_succesful = true;
	}
	else if (name == student4.get_student_name() && password == student4.get_student_password())
	{
		active_student = student4;
		login_succesful = true;
	}
	else if (name == student5.get_student_name() && password == student5.get_student_password())
	{
		active_student = student5;
		login_succesful = true;
	}
	else
	{
		cout << "Invalid Name or Password" << endl;
	}

	if (login_succesful)
	{
		student_portal_menu();
	}
}
int main()
{
	string student_login_name;
	string student_login_password;

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
				//login
				cout<< "Enter Name: ";
				cin >> student_login_name;
				cout << "Enter Password: ";
				cin >> student_login_password;
				login(student_login_name, student_login_password);
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