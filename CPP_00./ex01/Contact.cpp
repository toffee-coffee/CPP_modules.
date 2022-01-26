#include "Contact.hpp"

std::string Contact::fieldsString[4] = {"INDEX", "F. NAME", "L. NAME", "NICKNAME"};

Contact::Contact() { }

Contact::~Contact() { }

bool Contact::createContact(int index) {
    this->index = index;
    std::cout << "\033[0;37m··· ENTER CONTACT INFO:\033[0m " << std::endl;
    for (int i = FIRST_NAME; i <= DARKEST_SECRET; i++) {
        std::cout << "\033[0;37m···\033[0m ";
        std::getline(std::cin, this->fields[i]);
        if (!std::cin)
            return (false);
        if (this->fields[i].length() == 0) {
            std::cout << "\033[0;37m···\033[0m \033[1;31mEMPTY CONTACT NOT ADDED\033[0m" << std::endl;
            return (false);
        }
    }
    std::cout << "\033[0;37m···\033[0m \033[1;32mCONTACT ADDED\033[0m" << std::endl;
    return (true);
}

void Contact::printFormatted(std::string field) {
    std::cout << "\033[0;37m•\033[0m";
    std::cout << std::setfill(' ') << std::setw(10);
    if (field.length() <= 10) {
        std::cout << field;
    } else {
        std::cout << field.substr(0, 9) + ".";
    }
}

void Contact::printHeader(void) {
    for (int i = 0; i < 4; i++)
        Contact::printFormatted(Contact::fieldsString[i]);
    std::cout << "\033[0;37m•\033[0m" << std::endl;
}

void Contact::print(void) {
    Contact::printHeader();
    Contact::printFormatted(std::to_string(this->index));
    for (int i = FIRST_NAME; i <= NICKNAME; i++) {
        Contact::printFormatted(this->fields[i]);
    }
    std::cout << "\033[0;37m•\033[0m" << std::endl;
}
