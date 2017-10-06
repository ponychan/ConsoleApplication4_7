// ConsoleApplication47.cpp: 定义控制台应用程序的入口点。
//4.7.cpp用结构体储存学生信息

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//定义结构体储存学生信息
struct student {
	int num;
	string name;
	char sex;
	int age;
};

int main()
{
	student stu = { 97001,"LinLin",'F',19 };
	cout << "num : " << stu.num << endl;
	cout << "name: " << stu.name << endl;
	cout << "sex : " << stu.sex << endl;
	cout << "age : " << stu.age << endl;
	return 0;
}

