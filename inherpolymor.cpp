#include "classes.h"
int main(){
	Employee* employee = new Employee;
	Manager* manager = new Manager(.20);
	Developer* developer = new Developer(.10);
	employee->calculateBonus();
	manager->calculateBonus();
	developer->calculateBonus();

	employee* = &manager;
	return 0;
}
