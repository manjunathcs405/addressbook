#include<iostream>
#include<assert.h>
#include "Phone_AddressBook.h"

int main()
{
    std::cout<<"ENtering Main";
    AddressBook *base_ptr = new Phone_AddressBook();
    bool sucess = base_ptr->addContact();
    assert(sucess);
    std::cout<<"Exiting Main";
    return(0);
}
