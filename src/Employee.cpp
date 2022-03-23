#include <iostream>
#include "staffMember.h"

using namespace std;

class Employee : public StaffMember::staffMember
{
    protected:

        string socialSecurityNumber;

    public:

        void NewEmployee();
        void setSocialSecurityNumber(string SSN);
        string printData();
        string Pay();
};

string takeStringInput(string Vari, string valu)
{
    cout << "Enter " << Vari << ": ";
    cin >> valu;

    return valu;

};

int takeIntInput(string Vari, int valu)
{
    cout << "Enter " << Vari << ": ";
    cin >> valu;

    return valu;

};


void Employee::NewEmployee()
{
    string SSN, Email, PhoneNumbah, Name;
    int EmployeeID;

    takeStringInput("Social Security Number", SSN);
    takeStringInput("Email", Email);
    takeStringInput("Phone Number", PhoneNumbah);
    takeStringInput("Name", Name);

    takeIntInput("EmployeeID", EmployeeID);

    Employee::setSocialSecurityNumber(SSN);
    Employee::setName(Name)              ;
    Employee::setEmail(Email)            ;
    Employee::setEmployeeID(EmployeeID)  ;
    Employee::setPhone(PhoneNumbah)      ;

};

void Employee::setSocialSecurityNumber(string SSN)
{
    SSN = Employee::socialSecurityNumber;
};

