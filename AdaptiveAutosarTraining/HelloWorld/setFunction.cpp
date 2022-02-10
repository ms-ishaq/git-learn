#include<iostream>
#include<string>
using namespace std;
#include "employee.h"

	

	
void employee::setEmployeeData(string fname, string lname, int monthlySalary)
	{
		firstname=fname;
		lastname=lname;
		if(monthlySalary<0)
			salary=0;
			else
			salary=monthlySalary*12;
	}
