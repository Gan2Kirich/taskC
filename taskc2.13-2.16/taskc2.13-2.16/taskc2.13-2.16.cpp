#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
     
    /* 2.13
    double a, b, x;
    std::cout << "Введите 2 числа ";
    std::cin >> a >> b;
    if (a == 0)
    {
        std::cout << "a не долдно равняться 0";
    }
    else
    {
        x = -b / a;
        std::cout << "x равен " << x;
    }
    */

    /* 2.14
    int a, b, c;
    std::cout << "введите 2 катета";
    std::cin >> a >> b;
    c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    std::cout << "гипотенуза равны " << c;
    */

    /* 2.15
    double R, r, c;
    double pi = M_PI;
    std::cout << "Введите внешний и внутренний радиус(R и r) ";
    std::cin >> R >> r;
    if (R > r)
    {
        c = pi * (std::pow(R, 2) - std::pow(r, 2));
        std::cout << "Площадь кольца " << c;
    }
    else 
    {
        std::cout << "R должно быть больше r ";
    }
    */

    /* 2.16
    int a, b, c,p;
    std::cout << "Введите 2 катета ";
    std::cin >> a >> b;
    c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    p = a + b + c;
    std::cout << "Периметр равен " << p;
    */
}

