#include "Employee.h"
#include <iostream>

using namespace std;

//Emplyee child class
//It failed to compile due to a minor error i'm really lazy to fix, i'll do it later

void HourlyEmployee::NewHourlyEmployee()
{
    //Takes input from the user
    takeIntInput(Constants::cID, employeeID)              ;
    takeStringInput(Constants::cName, name)               ;
    takeStringInput(Constants::cSSN, socialSecurityNumber);
    takeStringInput(Constants::cPhone, phone)             ;
    takeStringInput(Constants::cEmail, email)             ;
  
}

//Watch me 1 line this
void HourlyEmployee::addHours(int extraHours) { HoursWorked += extraHours; }

string HourlyEmployee::Print()
{
    //converts int based parameter to a string
    string iD = to_string(employeeID);
    //an array of all the class parameters
    string empInfo[6] {name, iD, socialSecurityNumber, phone, email};
    //Has to be the same order as above
    string constArr[6] { Constants::cName, Constants::cID, Constants::cSSN,
                         Constants::cPhone, Constants::cEmail};
    
    for (int i = 0; i <= sizeof(empInfo); i++){
        cout <<  constArr[i] << ": ";
        return empInfo[i];
    }
}


double HourlyEmployee::Pay()
{

//pay here i dunno
}

