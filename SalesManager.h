#pragma once
#include<iostream>
#include"GeneralManager.h"
#include"Salesman.h"

class SalesManager : public GeneralManager, public Salesman{
private:
	double basicSalary = 5000;
	double push$Percent_Manager = 0.05;
public:
	SalesManager();
	SalesManager(int, string, string, Date, string, int);
	virtual void calculateSalary();
	virtual string getInfo();
};