#include <iostream>

int main() {
    int number;

    std::cout << "Введите целое число:" << std::endl;
    std::cin >> number;
    
    std::cout << number << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " × " << i << " = " << number * i << std::endl;
    }

    return 0;
}
