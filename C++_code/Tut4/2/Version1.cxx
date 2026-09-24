#include <iostream>
#include <string>
#include <vector>

int main (){
    std::string your_name;
    std::vector<std::string> cool_people_list{"Bob", "Oscar", "Geoff"};
    std::cout << "what is your name?\n";
    std::cin >> your_name;

    for (auto name : cool_people_list){
        if (your_name == name) {
        std::cout << "Why, hello there " << your_name << "!!!!"<< std::endl;
        } else {
        std::cout << "Hello " << your_name << std::endl;
        }
    }
    
        
}