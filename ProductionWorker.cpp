#include "ProductionWorker.h"

ProductionWorker::ProductionWorker():Employee()
{
	m_Shift = 1;
	m_HourlyPayRate = 0.0;
};

ProductionWorker::ProductionWorker(int shift, double hourlyPayRate)
{
	m_Shift = shift;
	m_HourlyPayRate = hourlyPayRate;
};

ProductionWorker::ProductionWorker(string name, string number, string hireDate, int shift, double hourlyPayRate): Employee(name, number, hireDate)
{
	m_Shift = shift;
	m_HourlyPayRate = hourlyPayRate;
};
