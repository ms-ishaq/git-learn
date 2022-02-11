#include<iostream>
#include<string>
using namespace std;
#include "employee.h"

int main()
{
	employee emp1;
	employee emp2;
	
	emp1.setEmployeeData("Malik", "Shoaib", -2001);
	emp2.setEmployeeData("Junaid", "Ahmed", 2000);
	
	emp1.getEmployeeData();
	emp2.getEmployeeData();
	
	return 0;
	
}
