#include "Person.h"
using namespace std;

Person::Person():
    name(""),
    mobileNo(""),
    emailId(""),
    address(""),
    groups("")
{
}
Person::~Person()
{

}
bool Person::fillDetails(string name, string mobileNo, string emailId, string groups)
{
    return true;
}
bool Person::getDetails()
{
    return true;
}

