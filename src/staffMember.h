#ifndef EMPLMNG
#define EMPLMNG


using namespace std;
#include <string>
namespace StaffMember
{
    class staffMember
    {
    protected:
        int employeeID;
        string phone;
        string name;
        string email;

    public:

        //Constructor Used usually
        staffMember(string Name, string Phone, string Email, int ID){
            employeeID = ID   ;
            phone      = Phone;
            name       = Name ;
            email      = Email;
        }

        //Default values when no info is given
        staffMember(){
            employeeID = 0      ; //Maybe later Make it default to the latest ID
            phone      = "NULL" ;
            name       = "NULL" ;
            email      = "NULL" ;
        }

        //these were deemed unneseccary now
        //we can't do this over and over for every fucking child class
            /* void setEmployeeID(int employeeID);
                void setPhone(string phone);
                void setName(string name);
                void setEmail(string email);
            */
        string Print();
        double Pay();
        
    };
}

class Volunteer : StaffMember::staffMember
{

    protected:
        double amount;

    public:
        //Constructor
        Volunteer(string Name, string Phone, string Email, int ID)
        {
            staffMember(Name, Phone, Email, ID);

        }

        //Default values
        Volunteer()
        {
            staffMember();
        }

};
#endif