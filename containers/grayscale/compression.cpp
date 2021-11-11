#include "compression.h"

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& input){
    std::vector<std::pair<uint8_t, uint8_t>> res;
    res.reserve(width * height);
    for(const auto& i : input){ 
        std::pair<uint8_t, uint8_t> pair;
        uint8_t cnt = 0;
        uint8_t prev = i.front();
        for(const uint8_t& j: i){
            if(j!=prev){
                pair = std::make_pair(prev, cnt);
                res.push_back(pair);
                prev = j;
                cnt = 1;
            }else{
                cnt++;
            }
        }
        res.push_back(std::make_pair(prev, cnt));
        
    }
    return res;
}


std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& input){
    std::array<std::array<uint8_t, width>, height> res;
    auto cnt = 0;
    auto cnt_outer = 0;
    for(auto& i: input){
        std::array<uint8_t, width> gs;

        for(auto j = 0; j < i.second; j++){
            gs[cnt++ + j] = i.first;
        }
        if(gs.size() == width){
            cnt_outer++;
            cnt = 0;
        }
        res[cnt_outer] = gs;
    }
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