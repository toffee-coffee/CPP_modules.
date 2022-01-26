#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>

#include "Contact.hpp"

class PhoneBook {
 private:
    Contact contacts[8];
    int size;
    int index;
 public:
    PhoneBook();
    virtual ~PhoneBook();

    void addContact();
    void searchContact();
    void printWhole();
};

#endif
