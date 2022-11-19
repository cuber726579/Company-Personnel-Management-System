#include<iostream>
#include<string>
#include"Date.h"
#include"GeneralManager.h"
#include"Technician.h"
#include"Salesman.h"
#include"SalesManager.h"
using namespace std;

int main(void) {
	Employee* person1 = new Salesman();
	cout << "The monthly salart of salesman : " << person1->getSalary() << endl;
	cout << "Personal Information : " << endl << person1->getInfo() << endl << endl;

	Employee* person2 = new GeneralManager();
	cout << "The monthly salary of Manager : " << person2->getSalary() << endl;
	cout << "Personal Information : " << endl << person2->getInfo() << endl << endl;

	Employee* person3 = new Technician();
	cout << "The monthly salart of Technician : " << person3->getSalary() << endl;
	cout << "Personal Information : " << endl << person3->getInfo() << endl << endl;

	Employee* person4 = new SalesManager();
	cout << "The monthly salary of salesmanager : " << person4->getSalary() << endl;
	cout << "Personal Information : " << endl << person4->getInfo() << endl << endl;

	Employee* person = NULL;

	person = new Salesman(5, "mary", "Female", Date(2001, 7, 29), "��ɽ", 100900);
	cout << "The monthly salart of salesman : " << person->getSalary() << endl;
	cout << "Personal Information : " << endl << person->getInfo() << endl << endl;

	person = new GeneralManager(6, "William", "Male", Date(1996, 7, 1), "USA");
	cout << "The monthly salart of Manager : " << person->getSalary() << endl;
	cout << "Personal Information : " << endl << person->getInfo() << endl << endl;

	person = new Technician(7, "nexa", "Male", Date(1997, 4, 25), "Serbia",47.5);
	cout << "The monthly salart of Technician : " << person->getSalary() << endl;
	cout << "Personal Information : " << endl << person->getInfo() << endl << endl;

	person = new SalesManager(8, "jks", "Male", Date(1995, 12, 12), "Australian", 157780);
	cout << "The monthly salart of salesmanger : " << person->getSalary() << endl;
	cout << "Personal Information : " << endl << person->getInfo() << endl << endl;

	// Date d1;
	// cin >> d1;
	// cout << d1 << endl;
	return 0;
}