#include <vector>
#include <string>
#include <iostream>

void removeVowels(std::vector<std::string> vec){
    std::string vowels = "aeiou";
    for(auto& pass:vec){
        while (pass.find_first_of(vowels) != std::string::npos) {
        pass[pass.find_first_of(vowels)] = '\0' ; 
    }
    }
    
}

int main(){
    std::vector<std::string> vec = {"abcde", "aabbbccabc", "qwerty"};
    removeVowels(vec);
    for(auto& i:vec){
        std::cout << i << '\n';
    }

    return 0;
}