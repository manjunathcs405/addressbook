#ifndef ADDRESS_BOOK
#define ADDRESS_BOOK

#include<iostream>
#include "Person.h"

class addressBook
{
    public:
        addressBook();
        ~addressBook();
        bool addContact();
        bool removeContact();
        bool modifyContact();
};
#endif
