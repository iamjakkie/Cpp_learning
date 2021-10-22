#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    std::vector<std::pair<int, std::string>> v {
        {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}
    };

    // std::cout << v.size() << '\n';
    std::vector<int> v2(v.size());

    std::transform(v.begin(),
                    v.end(),
                    v2.begin(),
                    [] (auto pair){
                        return pair.first;
                    });
    for(auto& el:v2){
        std::cout << el << '\n';
    }
    // std::cout << v.front().second << '\n';

    std::vector<std::string> v3(v.size());

    std::transform(v.begin(),
                    v.end(),
                    v3.begin(),
                    [] (auto pair){
                        return pair.second + ':' + std::to_string(pair.first);
                    });

    for(auto& el:v3){
        std::cout << el << '\n';
    }

    std::vector<char> v4;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int ind = 0;

    std::generate(std::back_inserter(v4),
                    [alphabet, ind] () mutable{
                        return alphabet[ind+=2];
                    });
    // std::cout << alphabet[0] << '\n';
    for(auto& el:v4){
        std::cout << el << '\n';
    }

    return 0;
}