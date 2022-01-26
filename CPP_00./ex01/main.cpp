#include <iostream>

#include "PhoneBook.hpp"

int main(void) {
    PhoneBook phoneBook;
    std::string input;

    while (21) {
        if (!std::cin)
            break;
        std::cout << "\033[0;37m···\033[0m ";
        std::getline(std::cin, input);
        if (!std::cin)
            break;
        if (input == "ADD") {
            phoneBook.addContact();
        } else if (input == "SEARCH") {
            phoneBook.searchContact();
        } else if (input == "EXIT") {
            std::cout << "\033[0;37m···\033[0m \033[1;35mBYE\033[0m" << std::endl;
            break;
        } else if (input == "TEST") {
            phoneBook.printWhole();
        }
    }
    return (0);
}
