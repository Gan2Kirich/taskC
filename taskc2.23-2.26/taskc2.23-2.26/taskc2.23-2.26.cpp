

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    /* 2.23
    int a, b,p,d;
    std::cout << "Введите 2 числа ";
    std::cin >> a >> b;
    p = 2 * (a + b);
    d = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    std::cout << "Периметр равен - " << p << "\n";
    std::cout << "Длина диагонали равна - " << d;
    */

    /* 2.24
    double a, b, c, d, f, s;
    std::cout << "Введите 2 числа ";
    std::cin >> a >> b;
    if (b == 0)
    {
        std::cout << "Число b не должно быть 0 " << "\n";
        std::cout << "Введите b ";
        std::cin >> b;
        c = a + b;
        d = a - b;
        f = a * b;
        s = a / b;
        std::cout << "Сумма " << c << "\n";
        std::cout << "Разность " << d << "\n";
        std::cout << "Произведение " << f << "\n";
        std::cout << "частное " << s;
    }
    else
    {
        c = a + b;
        d = a - b;
        f = a * b;
        s = a / b;
        std::cout << "Сумма " << c << "\n";
        std::cout << "Разность " << d << "\n";
        std::cout << "Произведение " << f << "\n";
        std::cout << "частное " << s;
    }
    */

    /* 2.25
    int a, b, h, v, s;
    std::cout << "Введите 3 числа ";
    std::cin >> a >> b >> h;
    v = a * b * h;
    s = 2 * (a + b) * h;
    std::cout << "Обьем " << v << "\n";
    std::cout << "Площадь боковой поверхности " << s;
    */

    /* 2.26
    int a, b, a1, b1,d;
    std::cout << "Введите координаты точки А ";
    std::cin >> a >> b;
    std::cout << "Введите координаты точки Б ";
    std::cin >> a1 >> b1;
    d = std::sqrt(std::pow((a1 - a), 2) + std::pow((b1 - b), 2));
    std::cout << "Растояние " << d;
    */
}

