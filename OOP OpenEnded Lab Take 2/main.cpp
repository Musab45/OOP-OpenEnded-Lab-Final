#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<fstream>
#include "Student.h"
#include "Course.h"

using namespace std;

void create_student()
{
	string name;
	string id;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter id: ";
	cin >> id;
}

int main()
{

	Student st1 = { "Musab","121" };
	Course cs1 = { "English", "122" };

	char choice;
	do
	{
		cout << "1.Enroll" << endl;
		cout<<"2.Display"<<endl;	
		cout<<"3.Remove"<<endl;	
		cout << "Choice: ";
		cin >> choice;
		switch (choice)
		{
		case'1':
			st1.enroll_course(cs1);
			break;
		case'2':
			st1.view_courses();
			break;
		case'3':
			st1.remove_course(cs1);
			break;
		}
	} while (choice != '4');
}