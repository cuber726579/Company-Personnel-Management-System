#include"SalesManager.h"

SalesManager::SalesManager() : GeneralManager(-1,"NULL","NULL",Date(),"NULL"), Salesman() {
	this->setPush$Percent(this->push$Percent_Manager);
	this->calculateSalary();
}

SalesManager::SalesManager(int workNum, string name, string gender,
	Date date, string position, int salesVolume) 
	: GeneralManager(workNum, name, gender, date, position), Salesman(workNum, name, gender, date, position, salesVolume) {
	this->setPush$Percent(this->push$Percent_Manager);
	this->calculateSalary();
}

void SalesManager::calculateSalary() {
	double salary = this->getSalesVolume() * this->getPush$Percent() + this->basicSalary;
	this->setSalary(salary);
}

string SalesManager::getInfo() {
	int posPercent = to_string(this->getPush$Percent()).find(".");
	int posSales = to_string(this->getSalesVolume()).find(".");
	int posSalary = to_string(this->getSalary()).find(".");

	string retStr = this->getInfo_base();
	retStr += "Department : " + this->getDept() + " | ";
	retStr += "Basic Salary:" + to_string(this->basicSalary).substr(0, posPercent + 3) + " | ";
	retStr += "Push Money Percentage:" + to_string(this->getPush$Percent()).substr(0, posPercent + 3) + " | ";
	retStr += "Sales Volume:" + to_string(this->getSalesVolume()).substr(0, posSales + 3) + " | ";
	retStr += "Monthly Salary:" + to_string(this->getSalary()).substr(0, posSalary + 3);

	return retStr;
}
