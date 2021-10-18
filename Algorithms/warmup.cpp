#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    [&v](){
        for(const auto &el:v){
            std::cout << el << ' ';
        }
        std::cout << '\n';
    }();

    auto lam = [](int el){
        std::cout << el << '\n';
    };

    std::for_each(begin(v), end(v), lam);

    // std::for_each(begin(v), end(v), [](int el){
    //     std::cout << el << '\n';
    // });
    // int a = 2;
    // auto l = [&a](){
    //     std::cout << a;
    // }


    return 0;
}