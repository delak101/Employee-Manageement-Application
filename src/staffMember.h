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

        void setEmployeeID(int employeeID);
        void setPhone(string phone);
        void setName(string name);
        void setEmail(string email);
        string Print();
        double Pay();

    };
}
#endif