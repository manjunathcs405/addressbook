#ifndef ADDRESS_BOOK
#define ADDRESS_BOOK

#include<iostream>
using namespace std;

class AddressBook
{
    public:
        AddressBook(){ }
        virtual ~AddressBook(){}
        virtual bool addContact()= 0;
        virtual bool removeContact() = 0;
        virtual bool modifyContact() = 0;
        virtual bool searchContact() = 0;
    protected:
        string name;
        string number;
};
#endif
