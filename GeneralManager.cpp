#include"GeneralManager.h"

GeneralManager::GeneralManager() {
	this->setInfo();
	this->calculateSalary();
}

GeneralManager::GeneralManager(int workNum, string name, string gender, Date date, string position) {
	this->setInfo(workNum, name, gender, date, position);
	this->calculateSalary();
}

void GeneralManager::calculateSalary() {
	this->setSalary(8000);
}

string GeneralManager::getInfo() {
	string salaryStr = to_string(this->getSalary());
	int pos = salaryStr.find(".");

	string retStr = this->getInfo_base();
	retStr += "Monthly Salary:" + to_string(this->getSalary()).substr(0,pos+3);
	return retStr;
}
