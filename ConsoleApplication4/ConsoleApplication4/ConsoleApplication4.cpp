#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "Rus");

    /* 2.4
    int a, r;
    std::cout << "Введите сторону квадрата ";
    std::cin >> a;
    r = 4 * a;
    std::cout << "Периметр " << r;
    */

    /* 2.5
    int a, r;
    std::cout << "Введите радиус ";
    std::cin >> a;
    r = 2 * a;
    std::cout << "Диаметр " << r;
    */

    /* 2.6
    double R = 6350;
    double a,d;
    std::cout << "Введите растояние ";
    std::cin >> a;
    d = std::sqrt(2*R*a + std::pow(a,2));
    std::cout << "результат " << d;
    */

    /* 2.7
    double a,v,s; 
    std::cout << "Введите длину ";
    std::cin >> a;
    v = std::pow(a, 3);
    s = 4 * std::pow(a, 2);
    std::cout << "Обьем " << v << "\n";
    std::cout << "Площадь " << s;
    */

    /* 2.8
    double pi = M_PI;
    double a,d,p;
    std::cout << "Введите радиус ";
    std::cin >> a;
    d = 2 * pi * a;
    p = pi * std::pow(a, 2);
    std::cout << "Длина " << d << "\n";
    std::cout << "Площадь " << p;
    */
}