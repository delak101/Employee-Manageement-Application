#ifndef EMPLMNG_E
#define EMPLMNG_E


#include "staffMember.h"
#include <string>

using namespace std;

//Strings used frequently by input handlers so i declared them here
namespace Constants{
    const string SSN   = "Social Security Number";
    const string email = "Email"                 ;
    const string phone = "Phone"                 ;
    const string ID    = "ID"                    ;
    const string name  = "Name"                  ;    
};

//Input Handlers
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

        //Constructor for this class
        Employee(string ssn, string Name, string Phone, string Email, int ID ){

            staffMember(Name, Phone, Email, ID);
            socialSecurityNumber = ssn;
        }

        //Default employee constructor
        Employee(){

            staffMember();
            socialSecurityNumber = 'NULL';
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
            HoursWorked = NULL;
            rate        = NULL;
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

        CommissionEmployee(string ssn, string Name, string Phone, string Email,
         int ID, double Target )
         {

             Employee(ssn, Name, Phone, Email, ID);
             target = Target;
         }
};
#endif