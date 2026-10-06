#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    /* 2.27
    double a, b, h, x,c,p;
    std::cout << "Введите 3 числа ";
    std::cin >> a >> b >> h;
    x = (std::abs(a - b)) / 2;
    c = std::sqrt(std::pow(h, 2) + std::pow(x, 2));
    p = a + b + 2 * c;
    std::cout << "Периметр равен " << p;
    */

    /* 2.28
    double a, b, c, x, s,h;
    std::cout << "Введите 3 числа (a, b, c) ";
    std::cin >> a >> b >> c;
    if (a < b)
    {
        std::cout << "a должно быть больше b " << "\n";
        std::cout << "Введите a";
        std::cin >> a;
        x = (a - b) / 2;
        double rad = c * M_PI / 180.0;
        h = x * std::tan(rad);
        s = ((a + b) / 2) * h;
        std::cout << "Площадь трапеции равна " << s;
    }
    else
    {
        x = (a - b) / 2;
        double rad = c * M_PI / 180.0;
        h = x * std::tan(rad);
        s = ((a + b) / 2) * h;
        std::cout << "Площадь трапеции равна " << s;
    }
    */

    /* 2.29
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Введите координаты 1 вершины ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 вершины ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты 3 вершины ";
    std::cin >> x3 >> y3;

    double a = std::sqrt(std::pow((x3 - x2), 2) + std::pow((y3 - y2), 2));
    double b = std::sqrt(std::pow((x3 - x1), 2) + std::pow((y3 - y1), 2));
    double c = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
    
    double p = a + b + c;
    double P = p / 2;
    double s = std::sqrt(P*(P-a)*(P-b)*(P-c));
    std::cout << "Периметр равен " << p << "\n";
    std::cout << "Площадь равна " << s;
    */

    /* 2.30
    double x1, y1, x2, y2, x3, y3,x4,y4,s,s1,S;
    std::cout << "Введите координаты 1 вершины ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 вершины ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты 3 вершины ";
    std::cin >> x3 >> y3;
    std::cout << "Введите координаты 4 вершины ";
    std::cin >> x4 >> y4;

    s = 0.5 * std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    s1 = 0.5 * std::abs(x1 * (y3 - y4) + x3 * (y4 - y1) + x4 * (y1 - y3));
    S = s + s1;
    std::cout << "сумма площадей " << S;
    */
}

