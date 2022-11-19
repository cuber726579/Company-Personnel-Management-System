#include"Employee.h"

Employee::Employee() {
}

void Employee::setInfo() {
	int workNum;
	cout << "Enter the work number : ";
	cin >> workNum;
	this->setWorkNum(workNum);

	string name;
	cout << "Enter the name : ";
	cin >> name;
	this->setName(name);

	string gender;
	cout << "Enter the gender (Male/Female) : ";
	cin >> gender;
	this->setGender(gender);

	cout << "Enter the birthday : ";
	cin >> this->birthday;

	string pos;
	cout << "Enter the position : ";
	cin >> pos;
	this->setPosition(pos);
}

void Employee::setInfo(int workNum, string name, string gender, Date date, string pos) {
	this->setWorkNum(workNum);
	this->setName(name);
	this->setGender(gender);
	this->birthday = date;
	this->setPosition(pos);
}

string Employee::getInfo_base() {
	string retStr = "";
	retStr += "WorkID:" + to_string(this->workNum) + " | ";
	retStr += "Name:" + this->name + " | ";
	retStr += "Gener:" + this->gender + " | ";
	retStr += "Birthday:" + this->birthday.getDate() + " | ";
	retStr += "Position:" + this->position + "\n";
	return retStr;
}

void Employee::setWorkNum(int id) {
	this->workNum = id;
}

int Employee::getWorkNum() {
	return this->workNum;
}

void Employee::setName(string name) {
	this->name = name;
}

string Employee::getName() {
	return this->name;
}

void Employee::setGender(string gender) {
	if (!gender.compare("Male") || !gender.compare("Female"))
		this->gender = gender;
}

string Employee::getGener() {
	return this->gender;
}

void Employee::setBirthday(Date date) {
	this->birthday = date;
}

string Employee::getBrithday() {
	return this->birthday.getDate();
}

void Employee::setPosition(string pos) {
	this->position = pos;
}

string Employee::getPosition() {
	return this->position;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}

double Employee::getSalary() {
	return this->salary;
}

Employee::~Employee() {
	delete this;
}
