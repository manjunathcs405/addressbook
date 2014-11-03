#include <gtest/gtest.h>
#include "Phone_AddressBook.h"

TEST(addContact, AddingContactSuccess) {
    AddressBook *addbk = new Phone_AddressBook();
    ASSERT_TRUE(addbk->addContact());
    delete addbk;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
