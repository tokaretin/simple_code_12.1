#include <iostream>

int main()
{
    int number;
    while (true) {
        std::cout << "Input the number: ";
        std::cin >> number;

        if (number % 2 == 0) {
            std::cout << "Четное число" << '\n';
        } 
        else {
            std::cout << "Нечетное" << '\n';
        }
    }
}

