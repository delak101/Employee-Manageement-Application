#ifndef EMPLMNG
#def EMPLMNG

class staffMember
{
  protected:
    int employeeID;
    std::string phone;
    std::string name;
    std::string email;

  public:
    std::string Print();
    double Pay();
};

#endif
