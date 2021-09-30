#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second){
    
    std::string res;
    if(command == "add"){
        res = std::to_string(first+second);
    } else if(command == "subtract"){
        res = std::to_string(first-second);
    } else if(command == "multiply"){
        res = std::to_string(first*second);
    } else if(command == "divide"){
        res = std::to_string(first/second);
    } else{
        res = "Invalid data";
    }

    return res;
}

int main() {
    auto result = calculate("add", 2, 3);  // result = "5"
    std::cout << result << '\n';
    result = calculate("multiply", 2, 3);  // result = "6"
    std::cout << result << '\n';
    result = calculate("hello", 2, 3);     // result = "Invalid data"
    std::cout << result << '\n';

    return 0;
}