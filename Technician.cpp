#include"Technician.h"

Technician::Technician() {
	this->setInfo();

	double workHour = 0;
	cout << "Enter the work hour : ";
	cin >> workHour;
	this->setWorkHour(workHour);

	this->calculateSalary();
}

Technician::Technician(int workNum, string name, string gender,
	Date date, string position,int workHour) {
	this->setInfo(workNum, name, gender, date, position);
	this->setWorkHour(workHour);
	this->calculateSalary();
}

void Technician::setWorkHour(double workHour) {
	this->workHour = workHour;
}

double Technician::getWorkHour() {
	return this->workHour;
}

void Technician::calculateSalary() {
	double salary = this->workHour * this->hourlyWage;
	this->setSalary(salary);
}

string Technician::getInfo() {
	int posHour = to_string(this->getWorkHour()).find(".");
	int posSalary = to_string(this->getSalary()).find(".");

	string retStr = this->getInfo_base();
	retStr += "Hourly Wage:" + to_string(this->hourlyWage) + " | ";
	retStr += "Work Hour:" + to_string(this->getWorkHour()).substr(0, posHour + 2) + " | ";
	retStr += "Monthly Salary:" + to_string(this->getSalary()).substr(0, posSalary +3);

	return retStr;
}
