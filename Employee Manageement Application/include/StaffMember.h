#ifndef EMPLMNG
#def EMPLMNG

#include<iostream>

using namespace std;

class staffMember
{
  protected:
    int employeeID;
    string phone;
    string name;
    string email;

  public:
    string Print();
    double Pay();
};

#endif
