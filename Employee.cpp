#include "Employee.h"

#include <string>
using namespace std;

Employee::Employee() 
{
	m_Name = "";
	m_HireDate = "";
	m_Number = "";
};

Employee::Employee(string name, string number, string hireDate) 
{
	m_Name = name;
	m_Number = number;
	m_HireDate = hireDate;
};
