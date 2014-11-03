#include <gtest/gtest.h>
#include "AddressBook.h"

TEST(addContact, AddingContactSuccess) {
    AddressBook addBk_obj;
    ASSERT_TRUE(addBk_obj.addContact());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
