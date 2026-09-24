#include <iostream>
#include <vector>

int main(){
    int n{5};
    std::vector<int> storage;

    for (int i{0}; i < n; i++){
        int input;
        std::cout << "Please enter a number" << std::endl;
        std::cin >> input;
        storage.push_back(input);
    }
    
    std::cout << "You have entered the following" << std::endl;

    for (auto vec_i : storage) {
        std::cout << vec_i << std::endl;
    }

    std::cout << "The sum is" << std::endl;

    int result{0};
    for (auto vec_i : storage) {
        result += vec_i;
    }
    std::cout << result << std::endl;
}