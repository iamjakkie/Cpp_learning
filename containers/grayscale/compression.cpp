#include "compression.h"

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& input){
    std::vector<std::pair<uint8_t, uint8_t>> res;
    for(auto i : input){
        std::pair<uint8_t, uint8_t> pair;
        auto prev = -1;
        auto cnt = 0;
        for(auto j: i){
            if(j!=prev){
                pair = std::make_pair(j, cnt);
                prev = j;
                cnt = 0;
            } else{
                cnt++;
            }
            pair = std::make_pair(prev, cnt);
        }
        res.push_back(pair);
    }
    return res;
}


std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& input){
    std::array<std::array<uint8_t, width>, height> res;
    return res;
}

void printMap(const std::array<std::array<uint8_t, width>, height>& input){
    for(auto i: input){
        for(auto j: i){
            std::cout << j << " ";
        }
        std::cout << '\n';
    }
}