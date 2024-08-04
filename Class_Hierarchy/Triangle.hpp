//
//  Triangle.hpp
//  Class_Hierarchy
//
//  Created by Александр Нестеров on 8/4/24.
//

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Figure.hpp"

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

    Triangle(std::string name, double a, double b, double c, double A, double B, double C);

public:
    void print_info() const override;
};

class SimpleTriangle : public Triangle {
public:
    SimpleTriangle(double a, double b, double c, double A, double B, double C);
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B);
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B);
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side);
};

#endif
