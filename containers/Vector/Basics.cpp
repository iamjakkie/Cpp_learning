#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<int> vec{1,2,4,5,6};

    vec.erase(std::remove(vec.begin(), vec.end(), vec.front()),vec.end());

    vec.push_back(5);

    vec.emplace(vec.begin(), 12);
    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << '\n';
    for(const auto& i: vec){
        std::cout << i << '\n';
    }
    vec.clear();

    std::cout << "Size " << vec.size() << '\n';

    return 0;
}