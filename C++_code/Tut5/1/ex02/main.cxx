#include "Account.h"
#include <iostream>
#include <stdexcept>


int main() {
    //int bal{};
    //std::cout << "What's your starting balance?" << std::endl;
    //std::cin >> bal;
    whaleCheese::account my_acount{9};
    std::cout << my_acount.getBalance() << std::endl;
    my_acount.withdraw(10);
    std::cout << "you're new balance is: " << my_acount.getBalance() << std::endl;
};