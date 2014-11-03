#include "AddressBook.h"

class Phone_AddressBook : public AddressBook
{
    public:
        Phone_AddressBook();
        ~Phone_AddressBook();
        bool removeContact();
        bool addContact();
        bool modifyContact();
        bool searchContact();

    private:
        string address;
        string rigntone;
        string email;
};

