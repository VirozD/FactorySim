#pragma once
#include "Employee.h"

#include <string>
using namespace std;

class ProductionWorker :
    public Employee
{
private:
    int m_Shift;
    double m_HourlyPayRate;

public:
    void setShift(int shift) { m_Shift = shift; }
    void setHourlyRaRate(double hourlyPayRate) { m_HourlyPayRate = hourlyPayRate; }
    int getShift() { return m_Shift; }
    double getHourlyPayRate() { return m_HourlyPayRate; }

    ProductionWorker();
    ProductionWorker(int shift, double hourlyPayRate);
    ProductionWorker(string name, string number, string hireDate, int shift, double hourlyPayRate);
};

