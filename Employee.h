#pragma once

#include <string>
using namespace std;

class Employee
{
private:
	string m_Name;
	string m_Number;
	string m_HireDate;

public:
	void setName(string name) { m_Name = name; }
	void setNumber(string number) { m_Number = number; }
	void setHireDate(string hireDate) { m_HireDate = hireDate; }

	string getName() { return m_Name; }
	string getNumber() { return m_Number; }
	string getHireDate() { return m_HireDate; }

	Employee();
	Employee(string name, string number, string hireDate);
};

