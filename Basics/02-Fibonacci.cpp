#include <iostream>
#include <chrono>
#include <string>

int fibonacci_iterative(int sequence){
    auto t1 = 0, t2 = 1, next = 0;

    for (int i = 1; i <= sequence; ++i) {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return t1;
}

int fibonacci_recursive(int sequence){
    if(sequence == 0){
        return 0;
    } else if(sequence == 1){
        return 1;
    } else{
        return (fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2));
    }
}

int main(){
    auto num = 6;
    
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Iterative result: " << fibonacci_iterative(num) << '\n';
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Iterative time: " << duration.count() << '\n';

    start = std::chrono::high_resolution_clock::now();
    std::cout << "Recursive result: " << fibonacci_recursive(num) << '\n';
    stop = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Recursive time: " << duration.count() << '\n';
}