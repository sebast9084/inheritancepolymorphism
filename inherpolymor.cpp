#include "classes.h"
int main(){
	Employee* employee = new Employee;
	Manager* manager = new Manager(.20);
	Developer* developer = new Developer(.10);
	employee->calculateBonus();
	manager->calculateBonus();
	developer->calculateBonus();
	Employee* emp = new Manager; 
	emp->calculateBonus();
	emp = developer;
	emp->calculateBonus();
	return 0;
}
