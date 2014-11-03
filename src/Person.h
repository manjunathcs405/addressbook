#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class Person
{
    public:
        Person();
        ~Person();
    private:
        string name;
        string mobileNo;
        string emailId;
        string address;
        string groups;
        bool fillDetails(string name, string mobileNo, string emailId, string groups);
        bool getDetails();
};

#endif
