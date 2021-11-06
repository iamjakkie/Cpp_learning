//input: {{0 0 0 1 1 2 3 0 0 0},
//         {0 0 4 4 4 1 1 1 1 1},
//         {2 2 2 2 2 1 2 2 2 2}}
// output: {{0, 3}, {1, 2}, {2, 1}, {3, 1}, {0, 3}, {0, 2},
//          {4, 3}, {1, 5}, {2, 5}, {1, 1}, {2, 4}}

#include <iostream>
#include <vector>
#include <array>

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(std::array<std::array<uint8_t, 240>, 160> input){
    for(const auto& arr: input){
        for(const auto& val:arr){
            std::cout << val;
        }
        std::cout << '\n';
    }
    return std::vector<std::pair<uint8_t, uint8_t>>();
}

int main(){
    std::array<std::array<uint8_t, 240>, 160> aa {{0,0,0,1,1,2,3,0,0,0},{0,0,4,4,4,1,1,1,1,1},{2,2,2,2,2,1,2,2,2,2}};

    compressGrayscale(aa);

    return 0;
}