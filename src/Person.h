#ifndef PERSON_H
#define PERSON_H
#include<iostream>

class Person
{
    public:
        Person();
        ~Person();
    private:
        std::string name;
        std::string mobileNo;
        std::string emailId;
        std::string address;
        std::string groups;
        bool fillDetails();
        bool getDetails();
};

#endif
