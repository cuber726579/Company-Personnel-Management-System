#pragma once
#include<iostream>
#include"Employee.h"

class Salesman : virtual public Employee {
private:
	double salesVolume = 0;
	double push$Percent = 0.04;
	string dept_name = "Sales";
public:
	Salesman();
	Salesman(int, string, string, Date, string, int);
	void setSalesVolume(double);
	double getSalesVolume();
	void setPush$Percent(double percent);
	double getPush$Percent();
	string getDept();
	virtual void calculateSalary();
	virtual string getInfo();
};