#ifndef PERSON_H
#define PERSON_H
#include<iostream>

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
        bool fillDetails();
        bool getDetails();
};

#endif
