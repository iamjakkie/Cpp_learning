#include "compression.h"

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& input){
    std::vector<std::pair<uint8_t, uint8_t>> res;
    res.reserve(width * height);
    for(const auto& i : input){
        std::pair<uint8_t, uint8_t> pair;
        uint8_t cnt = 1;
        uint8_t prev = -1;
        for(const uint8_t& j: i){
            if(j!=prev){
                pair = std::make_pair(j, 1);
                prev = j;
            } else{
                cnt++;
            }
        }
        pair = std::make_pair(j, cnt);
        res.push_back(pair);
    }
    return res;
}


std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& input){
    std::array<std::array<uint8_t, width>, height> res;
    return res;
}

void printMap(const std::array<std::array<uint8_t, width>, height>& input){
    for(const auto& i: input){
        for(const auto& j: i){
            if(j < ' '){
                std::cout << ' ';
            } else{
                std::cout << j;
            }
        }
        std::cout << '\n';
    }
}