#include <iostream>

#include "Pair1.h"
#include "Pair2.h"
#include "StringValuePair.h"

void point1();
void point2();
void point3();

int main(int argc, char** argv)
{
    //point1();
    //point2();
    point3();

    return 0;
}

void point1()
{
    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void point2()
{
    Pair2<int, double> p1(6, 7.8);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair2<double, int> p2(3.4, 5);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void point3()
{
    StringValuePair<int> p2("Amazing", 7);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}
