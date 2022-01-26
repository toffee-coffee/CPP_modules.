#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->size = 0;
    this->index = 0;
}

PhoneBook::~PhoneBook() { }

void PhoneBook::addContact(void) {
    if (this->size == 8) {
        std::cout << "\033[0;37m···\033[0m \033[1;31mBOOK IS FULL REPLACING\033[0m" << std::endl;
        if (this->index == 8)
            this->index = 0;
        if (this->contacts[this->index].createContact(this->index))
            this->index++;
    } else {
        if (this->contacts[this->index].createContact(this->index)) {
            this->size++;
            this->index++;
        }
    }
}

void PhoneBook::searchContact(void) {
    std::string indexString;
    int index;

    if (this->size == 0) {
        std::cout << "\033[0;37m···\033[0m \033[1;31mNO CONTACTS\033[0m" << std::endl;
    } else {
        std::cout << "\033[0;37m··· INDEX: \033[0m";
        std::getline(std::cin, indexString);
        if (!std::cin)
            return;
        index = atoi(indexString.c_str());
        if (index < 0 || index >= this->size) {
            std::cout << "\033[0;37m···\033[0m \033[1;31mINVALID INDEX\033[0m" << std::endl;
        } else {
            this->contacts[index].print();
        }
    }
}

void PhoneBook::printWhole(void) {
    for (int i = 0; i < this->size; i++)
        this->contacts[i].print();
}
