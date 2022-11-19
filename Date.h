#pragma once
#include<iostream>
#include<string>
using namespace std;

class Date {
private:       
	int year = 1970;
	int month = 1;
	int date = 1;
public:
	Date();
	Date(int year, int month, int date);
	Date(const Date& date);
	void setYear(int);
	void setMonth(int);
	void setDate(int);
	string getDate();

	friend istream& operator>> (istream& in, Date& date);
	friend ostream& operator<< (ostream& out,Date date);
};