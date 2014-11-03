include "AddressBook.h"

class SIM_AddressBook : public AddressBook
{
    public:
        SIM_AddressBook();
        ~SIM_AddressBook();
        bool removeContact();
        bool addContact();
        bool modifyContact();
        bool searchContact();
};

