#include <string>
#include <iostream>
using namespace std;
#pragma once
class Employee{
public:
	Employee(){
		//cout << "Employee object created!" << endl;
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
	Manager(double percent){
		p = percent;
		//cout << "Manager object created!" << endl;
		name = "Manager";
	}
	void calculateBonus(){
		salary = 1500;
		int bonus = salary*p;
		cout << bonus << endl;
	}
private:
	double p;
};
class Developer: public Employee{
public:
	Developer(double percent){
		p = percent;
		//cout << "Manager object created!" << endl;
		name = "Developer";
	}
	void calculateBonus(){
		salary = 1500;
		int bonus = salary*p;
		cout << bonus << endl;
	}
private:
	double p;
};
