#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {8,2,5,3,4,4,2,7,6,6,1,8,9};
    std::sort(v.begin(), v.end());
    //get unique values
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());

    for(auto& el:v){
        std::cout << el << ' ';
    }

    return 0;
}