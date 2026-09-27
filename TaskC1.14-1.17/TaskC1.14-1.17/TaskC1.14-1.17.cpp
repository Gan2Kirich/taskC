
#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
#include <string>


int main()
{ 
    setlocale(LC_ALL, "Rus");

    /* 1.14
    int a,b,c;
    std::cout << "Введите 3 числа ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << a << "  " << b <<"  " << c;
    */
    
    /* 1.15
    int a, b, c,d;
    std::cout << "Введите 4 числа ";
    std::cin >> a >> b >> c >> d;
    std::cout << a << " " << b << " " << c << " " << d;
    */

    /* 1.16
    int t, v, x, y;
    std::cout << "Введите 5 чисел ";
    std::cin >> t >> v >> x >> y;
    std::cout << "a) " << "5 10\t" << "б) " << "100 " << t << "\t" << "в) " << x << " " << "25\n";
    std::cout << "  " << "7 см\t" << "  " << "1949 " << v << '\t' << "  " << x << " " << y;
    */

    /* 1.17
    int a, b, x,  y;
    std::cout << "Введите 4 числа ";
    std::cin >> a >> b >> x >> y;
    std::cout << "a) " << "2 кг\t" << "б) " << a << " " << "1\t" << "в) " << x << " "<<y<<"\n";
    std::cout << "  " << "13 17\t" << "  " << "19 " << b << '\t' << "  " <<  "5 " << y;
    */
}

