#include <iostream>
#include <string>
#include <vector>

int main (){
    std::string your_name;
    std::vector<std::string> cool_people_list{"Bob", "Oscar", "Geoff", "Sushanta"};
    std::cout << "What is your name?\n";
    std::cin >> your_name;


    bool name_match{false};
    for (auto name : cool_people_list){
        if (your_name == name) {
            name_match = true;
            break;
        }
    }

    if (name_match == true){
        std::cout << "Why, hello there " << your_name << std::endl ;
    } else {
        std::cout << "I don't belive we've met before, so greetings " << your_name << std::endl ;
    }
    
        
}