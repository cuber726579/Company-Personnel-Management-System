#include"Salesman.h"

Salesman::Salesman() {
	this->setInfo();

	int salesVolume = 0;
	cout << "Enter the sales volume : ";
	cin >> salesVolume;
	this->setSalesVolume(salesVolume);

	this->calculateSalary();
}

Salesman::Salesman(int workNum, string name, string gender, 
	Date date, string position, int salesVolume) {
	this->setInfo(workNum, name, gender, date, position);
	this->setSalesVolume(salesVolume);
	this->calculateSalary();
}

void Salesman::setSalesVolume(double salesVolume) {
	this->salesVolume = salesVolume;
}

double Salesman::getSalesVolume() {
	return this->salesVolume;
}

void Salesman::setPush$Percent(double percent) {
	if (0 < percent && percent < 1)
		this->push$Percent = percent;
}

double Salesman::getPush$Percent() {
	return this->push$Percent;
}

string Salesman::getDept() {
	return this->dept_name;
}

void Salesman::calculateSalary() {
	double salary = this->salesVolume * this->push$Percent;
	this->setSalary(salary);
}

string Salesman::getInfo() {
	int posPercent = to_string(this->push$Percent).find(".");
	int posSales = to_string(this->getSalesVolume()).find(".");
	int posSalary = to_string(this->getSalary()).find(".");

	string retStr = this->getInfo_base();
	retStr += "Department : " + this->dept_name + " | ";
	retStr += "Push Money Percentage:" + to_string(this->push$Percent).substr(0,posPercent+3) + " | ";
	retStr += "Sales Volume:" + to_string(this->getSalesVolume()).substr(0, posSales + 3) + " | ";
	retStr += "Monthly Salary:" + to_string(this->getSalary()).substr(0, posSalary + 3);

	return retStr;
}
