#include "Account.h"

namespace whaleCheese{


//int account::getBalance() const{
//    return balance;
//}

bool account::validity(int balance) {
    if (balance < 0){
        return false;
    }
    return true;
}

account::account(int startingBal) : balance(startingBal){
    if (validity(balance) == 0){
        throw std::runtime_error("you too poor");
    };
}

void account::withdraw (int amount){
    if (validity(balance-amount) == 0){
        throw std::runtime_error("you too poor");
    } else {
    balance -= amount;
    }
    return;      
};

void account::deposit (int amount){
    balance += amount;
    return;      
};

}

