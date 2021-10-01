#include <iostream>

int GCD(int num1, int num2){
    if (num2 == 0){
        return num1;
    }
    return GCD(num2, num1 % num2);
}

int LCM(int num1, int num2){
    return (num1 / GCD(num1, num2)) * num2;
}

int main(){
    std::cout << "LCM(255, 15) = " << LCM(255, 15) << "\n";

    std::cout << "GCD(255, 15) = " << GCD(255, 15) << "\n";

    return 0;
}