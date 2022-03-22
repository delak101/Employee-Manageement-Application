#include "Employee.h"
#include <iostream>

class HourlyEmployee : public Employee
{
    protected:
    
    public:
        
        void addHours(int);
        double Pay();
        string Print();

    private:

        void NewHourlyEmployee();
        double HoursWorked;
        double rate;
};

void HourlyEmployee::NewHourlyEmployee()
{
   // takeStringInput();

}