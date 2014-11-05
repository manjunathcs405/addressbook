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
        std::string address;
        std::string rigntone;
        std::string email;
};

