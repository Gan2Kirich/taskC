
#include <cmath>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    /* 2.1
    int x, a,c,d,f;
    d = 2;
    std::cout << "Введите 2 числа ";
    std::cin >> x >> a;
    c = std::pow(x,d);
    f = std::pow(a, d);
    int y1 = 17 * c - 6*x + 13;
    int y2 = 3 * f + 5 * a - 21;
    std::cout << "1 - " << y1 << "\n";
    std::cout << "2 - " << y2;
    */

    /* 2.2
    double a, b, c, d,f,n;
    std::cout << "Введите число ";
    std::cin >> a;
    d = 2;
    f = std::pow(a, d);
    c = f + 10;
    b = f + 1;
    n = std::sqrt(b);
    double result = c / n;
    std::cout << "Результат " << result;
    */

    /* 2.3
    double a, b, c, d, f, n,x,m,res2;
    std::cout << "Введите  2 числа  ";
    std::cin >> a >> x;
    b = 2 * a + std::sin(std::abs(3 * a));
    c = b / 3.56;
    d = std::sqrt(c);
    
    n = std::sqrt(1 + x);
    f = 3.2 + n;
    m = std::abs(5 * x);
    res2 = std::sin(f / m);
    std::cout << "Рез 1 " << d << "\n";
    std::cout << "рез 2 " << res2;
    */
}

