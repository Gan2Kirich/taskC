#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");

    /* 2.17
    double x, a, b, h,c,p;
    std::cout << "Введите 3 числа ";
    std::cin >> a >> b >> h;
    x = std::abs(a - b) / 2;
    c = std::sqrt(std::pow(h, 2) + std::pow(x, 2));
    p = a + b + 2 * c;
    std::cout << "Периметр равен " << p;
    */

    /* 2.18
    double x, y, q,z,a,b;
    std::cout << "Введите x и y ";
    std::cin >> x >> y;
    if (x == 0)
    {
        std::cout << "x не должен равняться 0 " << "\n";
        std::cout << "Введите x ";
        std::cin >> x;
        a = x + ((2 + y) / std::pow(x, 2));
        b = y + (1 / (std::sqrt(std::pow(x, 2) + 10)));
        z = a / b;

        q = 7.25 * std::sin(x) - std::abs(y);

        std::cout << "Перпвый пример " << z << "\n";
        std::cout << "Второй пример " << q;
    }
    else
    {
        a = x + ((2 + y) / std::pow(x, 2));
        b = y + (1 / (std::sqrt(std::pow(x, 2) + 10)));
        z = a / b;

        q = 7.25 * std::sin(x) - std::abs(y);

        std::cout << "Перпвый пример " << z << "\n";
        std::cout << "Второй пример " << q;
    }
    */

    /* 2.19
    double a, b, x, y, c, f,g,h;
    std::cout << "Введите a и b ";
    std::cin >> a >> b;
    if (a == 0)
    {
        std::cout << "a не должно равняться 0 " << "\n";
        std::cout << "Введите число a ";
        std::cin >> a;

        c = (2 / (std::pow(a, 2) + 25)) + b;
        f = std::sqrt(b) + ((a + b) / 2);
        x = c / f;

        g = std::abs(a) + 2 * std::sin(b);
        h = 5.5 * a;
        y = g / h;
        
        std::cout << "Первый пример " << x << "\n";
        std::cout << "Второй пример " << y;
    }
    else
    {
        c = (2 / (std::pow(a, 2) + 25)) + b;
        f = std::sqrt(b) + ((a + b) / 2);
        x = c / f;

        g = std::abs(a) + 2 * std::sin(b);
        h = 5.5 * a;
        y = g / h;

        std::cout << "Первый пример " << x << "\n";
        std::cout << "Второй пример " << y;
    }
    */

    /* 2.20
    double e, f, g, h, a, b, c,d,p,p1;
    std::cout << "Введите 4 числа ";
    std::cin >> e >> f >> g >> h;
    if (e == 0 && f == 0 )
    {
        std::cout << "Числа e и f не должны равняться 0 ";
        std::cout << "Введите числа e и f ";
        std::cin >> e >> f;

        d = std::pow((std::abs(e - (3 / f))),3);
        a = std::sqrt(d + g);

        b = std::sin(e) + std::pow(std::cos(h), 2);

        p = 33 * g;
        p1 = e * f - 3;
        c = p / p1;

        std::cout << "Первый пример " << a << "\n";
        std::cout << "Второй пример " << b << "\n";
        std::cout << "Третий пример " << c;


    }
    else if ( (e == 0)) 
    {
        std::cout << "Число e  не должно равняться 0 ";
        std::cout << "Введите число e  ";
        std::cin >> e;

        d = std::pow((std::abs(e - (3 / f))), 3);
        a = std::sqrt(d + g);

        b = std::sin(e) + std::pow(std::cos(h), 2);

        p = 33 * g;
        p1 = e * f - 3;
        c = p / p1;

        std::cout << "Первый пример " << a << "\n";
        std::cout << "Второй пример " << b << "\n";
        std::cout << "Третий пример " << c;
    }
    else if (f == 0)
    {
        std::cout << "Число f не должно равняться 0 ";
        std::cout << "Введите число f  ";
        std::cin >> f;

        d = std::pow((std::abs(e - (3 / f))), 3);
        a = std::sqrt(d + g);

        b = std::sin(e) + std::pow(std::cos(h), 2);

        p = 33 * g;
        p1 = e * f - 3;
        c = p / p1;

        std::cout << "Первый пример " << a << "\n";
        std::cout << "Второй пример " << b << "\n";
        std::cout << "Третий пример " << c;
    }
    */

    /* 2.21
    double e,f,g,h,a,b,c,c1;
    std::cout << "Введите 4 числа ";
    std::cin >> e >> f >> g >> h;
    b = e + (f / 2);
    a = b / 3;

    c1 = std::pow((g - h), 2) - 3 * std::sin(e);
    c = std::sqrt(c1);

    std::cout << "Первый пример " << a << "\n";
    std::cout << "Второй пример " << c;
    */

    /* 2.21
    double a, b,A,G;
    std::cout << "Введите 2 числа ";
    std::cin >> a >> b;

    A = (std::abs(a) + std::abs(b)) / 2;

    G = std::sqrt(std::abs(a) * std::abs(b));

    std::cout << "Первый пример " << A << "\n";
    std::cout << "второй пример " << G;
    */
}

