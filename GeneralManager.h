#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;

class GeneralManager : virtual public Employee {
public:
	GeneralManager();
	GeneralManager(int, string, string, Date, string);
	virtual void calculateSalary();
	virtual string getInfo();
};