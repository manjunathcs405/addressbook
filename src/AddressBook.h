#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

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
        std::string name;
        std::string number;
};
#endif
