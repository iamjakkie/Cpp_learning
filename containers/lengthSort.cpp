//Ma ona przyjąć std::forward_list<std::string> i zwrócić std::deque<std::string> z posortowanymi słowami od najkrótszego do najdłuższego. Jeżeli dwa lub więcej słów ma tyle samo znaków posortuj je leksykograficznie.

//Input: std::forward_list<std::string>{"Three", "One", "Four", "Two"}
//Output: std::deque<std::string>{"One", "Two", "Four", "Three"}

#include <iostream>
#include <forward_list>
#include <deque>
#include <string>
#include <algorithm>

bool compareStringLength(const std::string& s1, const std::string& s2){
    return s1.length() < s2.length();
}

std::deque<std::string> lengthSort(std::forward_list<std::string> l){
    std::deque<std::string> res;

    for (const auto& val:l){
        res.push_back(val);
    }

    std::sort(res.begin(), res.end(), compareStringLength);

    return res;
}

int main(){
    std::forward_list<std::string> fl {"Raz", "Dwa", "Trzy", "Cztery", "Piec"};

    auto deq = lengthSort(fl);

    for(const auto& val:deq){
        std::cout << val;
    }
    return 0;
}