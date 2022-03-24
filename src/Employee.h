#ifndef EMPLMNG_E
#define EMPLMNG_E


#include "staffMember.h"
#include <iostream>

using namespace std;

//Strings used frequently by input handlers so i declared them here
namespace Constants{
    const string cSSN   = "Social Security Number";
    const string cEmail = "Email"                 ;
    const string cPhone = "Phone number"          ;
    const string cID    = "ID"                    ;
    const string cName  = "Name"                  ;    
};

//Input Handlers
string takeStringInput(string Vari, string valu)
{
    cout << "Enter " << Vari << ": ";
    cin >> valu;

    return valu;

}

int takeIntInput(string Vari, int valu)
{
    cout << "Enter " << Vari << ": ";
    cin >> valu;

    return valu;

};


class Employee : public StaffMember::staffMember
{
    protected:

        string socialSecurityNumber;

    public:

        void NewEmployee();
        void setSocialSecurityNumber(string SSN);
        string printData();
        string Pay();

        //Constructor for this class
        Employee(string ssn, string Name, string Phone, string Email, int ID ){

            staffMember(Name, Phone, Email, ID);
            socialSecurityNumber = ssn;
        }

        //Default employee constructor
        Employee(){

            staffMember();
            socialSecurityNumber = "NULL";
        }
        
};

class HourlyEmployee : public Employee
{
    public:
        void addHours(int);
        double Pay();
        string Print();

    private:
        void NewHourlyEmployee();
        double HoursWorked;
        double rate;

        //Instructor
        HourlyEmployee
            (string ssn, string Name, string Phone, string Email, int ID, 
            double hrsWorked, double Rate){

            Employee(ssn, Name, Phone, Email, ID);
            HoursWorked = hrsWorked;
            rate        = Rate     ;
        }

        //Default instructor
        HourlyEmployee(){
            Employee();
            HoursWorked = 0;
            rate        = 0;
        }
};

class SalariedEmployee : public Employee
{
    private:
        void NewSalariedEmployee();
    
    public:

        double Pay();
        string Print();
        double salary;

        //Instructor
        SalariedEmployee(string ssn, string Name, string Phone, string Email,
         int ID, double Salary)
         {

            Employee(ssn, Name, Phone, Email, ID);
            salary = Salary;
         }

         //Default instructor

        SalariedEmployee()
        {
            Employee();
            salary = 0; //So sad no salary, C O P E
        }

};

class CommissionEmployee : public Employee
{
    private:
        void NewSalariedEmployee();

    public:
        double Pay();
        string Print();
        double target;

        //Constructor for this class
        CommissionEmployee(string ssn, string Name, string Phone, string Email,
         int ID, double Target )
         {

             Employee(ssn, Name, Phone, Email, ID);
             target = Target;
         }

        //Default Constructor
        CommissionEmployee() { Employee(); target = 0;}

};
#endif