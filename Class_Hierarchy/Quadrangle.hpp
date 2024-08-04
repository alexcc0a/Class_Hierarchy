//
//  Quadrangle.hpp
//  Class_Hierarchy
//
//  Created by Александр Нестеров on 8/4/24.
//

#ifndef QUADRANGLE_HPP
#define QUADRANGLE_HPP

#include "Figure.hpp"

class Quadrangle : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;

    Quadrangle(std::string name, double a, double b, double c, double d, double A, double B, double C, double D);

public:
    void print_info() const override;
};

class SimpleQuadrangle : public Quadrangle {
public:
    SimpleQuadrangle(double a, double b, double c, double d, double A, double B, double C, double D);
};

class Rectangle : public Quadrangle {
public:
    Rectangle(double a, double b);
};

class Square : public Quadrangle {
public:
    Square(double side);
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double A, double B);
};

class Rhombus : public Quadrangle {
public:
    Rhombus(double side, double A, double B);
};

#endif
