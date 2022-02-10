#include<iostream>
#include<string>
using namespace std;

class employee 
{
private:
	string firstname, lastname;
	int salary;
	
public:
	employee()
	{
		firstname="add first name";
		lastname="add last name";
		salary=0;
	}
	
	
	void setEmployeeData(string fname, string lname, int monthlySalary);
	
	
	void getEmployeeData();
	
	
};
