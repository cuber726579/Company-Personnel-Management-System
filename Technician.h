#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;

class Technician : public Employee {
private:
	int hourlyWage = 25;
	double workHour = 0;
public:
	Technician();
	Technician(int,string,string,Date,string,int);
	void setWorkHour(double);
	double getWorkHour();
	virtual void calculateSalary();
	virtual string getInfo();
};