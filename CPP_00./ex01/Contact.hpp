#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
 private:
    int index;
    std::string fields[5];

    static std::string fieldsString[4];

    static void printFormatted(std::string field);
    static void printHeader();
 public:
    Contact();
    virtual ~Contact();

    bool createContact(int index);
    void print();
};

enum ContactFields {
    FIRST_NAME,
    LAST_NAME,
    NICKNAME,
    PHONE_NUMBER,
    DARKEST_SECRET
};

#endif
