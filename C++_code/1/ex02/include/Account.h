#ifndef ACC
#define ACC
#include <iostream>

namespace whaleCheese{
class account {

public:
//constructors
account() = default;
explicit account(int startingBal);// : balance(startingBal){} 

    //if (validity()){
   //     std::runtime_error("you too poor");
   // };


//functions
int getBalance() const {return balance;}
void withdraw (int amount);
void deposit (int amount);

private:
int balance;
bool validity(int balance);



};
}

#endif //ACC 