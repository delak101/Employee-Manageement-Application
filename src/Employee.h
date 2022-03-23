#ifndef EMPLMNG1
#define EMPLMNG1


#include "staffMember.h"
#include <string>

using namespace std;

string takeStringInput(string Vari, string valu);

int takeIntInput(string Vari, int valu);

class Employee : public StaffMember::staffMember

{
    protected:

        string socialSecurityNumber;

    public:

        void NewEmployee();
        void setSocialSecurityNumber(string SSN);
        string printData();
        string Pay();
        string takeStringInput(string Vari, string valu);
        int takeIntInput(string Vari, int valu);
        
};

class HourlyEmployee : public Employee
{
    protected:
    
    public:
        void NewHourlyEmployee();
        void addHours(int);
        double Pay();
        string Print();

    private:
        double HoursWorked;
        double rate;
};

class SalariedEmployee : public Employee
{
    private:
        void NewSalariedEmployee();
    
    public:
        double Pay();
        string Print();

        double salary;

};

class CommissionEmployee : public Employee
{
    private:
        void NewSalariedEmployee();

    public:
        double Pay();
        string Print();
    
        double target;
};
#endif