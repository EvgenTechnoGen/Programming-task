#include <iostream>
#include <string>

int main () {
    setlocale(LC_ALL, "RUS");
    int a, b, c, d;

    
    std::cout << "Введите два однозначных числа." << std::endl;
    std::cin >> a >> b;

    c = a * b;