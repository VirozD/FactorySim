#pragma once
#include "ProductionWorker.h"

#include <string>
using namespace std;

class TeamLeader :
    public ProductionWorker
{
private:
    double m_MonthlyBonusAmount;
    int m_TrainingHours;
    int m_TrainingHoursAttended;

public:
    void setMonthyBonusAmount(double monthlyBonusAmount) { m_MonthlyBonusAmount = monthlyBonusAmount; }
    void setTrainingHours(int trainingHours) { m_TrainingHours = trainingHours; }
    void setTrainingHoursAttended(int trainingHoursAttended) { m_TrainingHoursAttended = trainingHoursAttended; }

    double getMonthlyBonusAmount() { return m_MonthlyBonusAmount; }
    int getTrainingHours() { return m_TrainingHours; }
    int getTrainingHoursAttended() { return m_TrainingHoursAttended; }

    TeamLeader();
    TeamLeader(string name, string number, string hireDate, int shift, double hourlyPayRate, double monthlyBonusAmount, int trainingHours, int trainingHoursBonus);
};


