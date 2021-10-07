#include <vector>
#include <iostream>

int main(){
    std::vector<int> vec;

    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << '\n';

    vec.resize(10, 5);

    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << '\n';

    vec.reserve(20);

    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << '\n';

    vec.shrink_to_fit();

    std::cout << "Size: " << vec.size() << " Capacity: " << vec.capacity() << '\n';
    return 0;
}