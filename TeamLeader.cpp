#include "TeamLeader.h"
#include <string>
#include <ostream>
using namespace std;

TeamLeader::TeamLeader():ProductionWorker()
{
	m_MonthlyBonusAmount = 0;
	m_TrainingHours = 0;
	m_TrainingHoursAttended = 0;
}

TeamLeader::TeamLeader(string name, string number, string hireDate, int shift, double hourlyPayRate, 
	double monthlyBonusAmount, int trainingHours, int trainingHoursAttended)
	: ProductionWorker(name, number, hireDate, shift, hourlyPayRate)
{
	m_MonthlyBonusAmount = monthlyBonusAmount;
	m_TrainingHours = trainingHours;
	m_TrainingHoursAttended = trainingHoursAttended;

}

