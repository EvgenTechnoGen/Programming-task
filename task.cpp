#include <iostream>
#include <string>

int main () {
    setlocale(LC_ALL, "RUS");
    int a, b, c, d;

    
    std::cout << "Введите два однозначных числа." << std::endl;
    std::cin >> a >> b;

    c = a * b;

    std::cout << "Чему равно произведение этих чисел?" << std::endl;
    std::cin >> d;

    if (d == c) {
        std::cout << "Правильный ответ!" << std::endl;
    }