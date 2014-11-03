#include "AddressBook.h"

class Gmail_AddressBook : public AddressBook
{
    public:
        Gmail_AddressBook();
        ~Gmail_AddressBook();
        bool removeContact();
        bool addContact();
        bool modifyContact();
        bool searchContact();

    private:
        string address;
        string rigntone;
        string email;
};

