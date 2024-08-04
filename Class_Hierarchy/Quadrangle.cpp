//
//  Quadrangle.cpp
//  Class_Hierarchy
//
//  Created by Александр Нестеров on 8/4/24.
//

#include "Quadrangle.hpp"
#include <iostream>

Quadrangle::Quadrangle(std::string name, double a, double b, double c, double d, double A, double B, double C, double D)
    : Figure(name, 4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

void Quadrangle::print_info() const {
    std::cout << get_name() << ":\n";
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}

SimpleQuadrangle::SimpleQuadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
    : Quadrangle("Четырёхугольник", a, b, c, d, A, B, C, D) {}

Rectangle::Rectangle(double a, double b)
    : Quadrangle("Прямоугольник", a, b, a, b, 90.0, 90.0, 90.0, 90.0) {}

Square::Square(double side)
    : Quadrangle("Квадрат", side, side, side, side, 90.0, 90.0, 90.0, 90.0) {}

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrangle("Параллелограмм", a, b, a, b, A, B, A, B) {}

Rhombus::Rhombus(double side, double A, double B)
    : Quadrangle("Ромб", side, side, side, side, A, B, A, B) {}
