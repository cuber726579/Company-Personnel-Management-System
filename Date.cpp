#include"Date.h"

Date::Date() {
}

Date::Date(int year, int month, int date) {
	this->setYear(year);
	this->setMonth(month);
	this->setDate(date);
}

Date::Date(const Date& date) {
	this->setYear(date.year);
	this->setMonth(date.month);
	this->setDate(date.date);
}

void Date::setYear(int year) {
	if (year < 2023)
		this->year = year;
}

void Date::setMonth(int month) {
	if (month < 13)
		this->month = month;
}

void Date::setDate(int date) {
	if (date < 32)
		this->date = date;
}

string Date::getDate() {
	string month = to_string(this->month);
	string monthStr = this->month < 10 ? "0" + month : month;

	string date = to_string(this->date);
	string dateStr = this->month < 10 ? "0" + date : date;
	return  to_string(this->year) + "-" + monthStr + "-" + dateStr;
}

istream& operator>>(istream& in, Date& date) {
	int year, month, date_temp;
	in >> year >> month >> date_temp;
	date.setYear(year);
	date.setMonth(month);
	date.setDate(date_temp);
	return in;
}

ostream& operator<<(ostream& out,Date date) {
	out << date.getDate();
	return out;
}
