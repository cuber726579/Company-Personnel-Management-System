#pragma once
#include<iostream>
#include<string>
#include"Date.h"
using namespace std;

class Employee {
private:
	int workNum = -1;
	string name = "NULL";
	string gender = "NULL";
	Date birthday;
	string position = "NULL";
	double salary = -1;
public:
	Employee();

	void setInfo();
	void setInfo(int,string,string,Date,string);
	string getInfo_base();
	void setWorkNum(int);
	int getWorkNum();
	void setName(string);
	string getName();
	void setGender(string);
	string getGener();
	void setBirthday(Date);
	string getBrithday();
	void setPosition(string);
	string getPosition();
	void setSalary(double);
	double getSalary();
	virtual void calculateSalary() = 0;
	virtual string getInfo() = 0;

	~Employee();
};
