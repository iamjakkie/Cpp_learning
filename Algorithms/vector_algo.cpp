#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(){
    std::vector<int> v = {8,2,5,3,4,4,2,7,6,6,1,8,9};

    auto num = std::count_if(v.begin(), v.end(), [](int i){
        return i >= 5;
    });
    std::cout << num << '\n';

    auto less_one = std::any_of(v.begin(), v.end(), [](int i){
        return i < 1;
    });

    std::cout << less_one << '\n';

    auto greater_one = std::all_of(v.begin(), v.end(), [](auto i){
        return i > 1;
    });

    std::cout << greater_one << '\n';

    std::copy_if(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "), [](auto x){ return x>6;});

    return 0;
}