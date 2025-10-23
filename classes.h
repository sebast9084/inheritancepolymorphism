#include <string>
#include <iostream>
using namespace std;
#pragma once
class Employee{
public:
	Employee(){
		name = "Employee";
	}
	void showInfo();
	virtual void calculateBonus(){
		salary = 1500;
		int bonus = 100;
		cout << bonus << endl;
	}
protected:
	string name;
	double salary;
};
class Manager: public Employee{
public:
	Manager(){
		name = "Manager";
	}
	void calculateBonus(){
		salary = 1500;
		int bonus = salary*p;
		cout << bonus << endl;
	}
private:
	double p = 20;
};
class Developer: public Employee{
public:
	Developer(){
		name = "Developer";
	}
	void calculateBonus(){
		salary = 1500;
		int bonus = salary*p;
		cout << bonus << endl;
	}
private:
	double p = 10;
};
