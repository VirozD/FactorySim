// Lab Report 6, Question 1
//

#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include <iostream>
using namespace std;

int main()
{        
    string name = "James";
    string number = "200";
    string hireDate = "March/15/2022";
    int shift = 2;
    double hourlyPayRate = 15.25;
    double monthlyBonusAmount = 100.50;
    int trainingHours = 10;
    int trainingHoursAttended = 8;

    TeamLeader Leader1(name, number, hireDate, shift, hourlyPayRate, monthlyBonusAmount, trainingHours, trainingHoursAttended);

    system("pause>0");
}
