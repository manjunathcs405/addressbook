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
        std::string address;
        std::string rigntone;
        std::string email;
};

