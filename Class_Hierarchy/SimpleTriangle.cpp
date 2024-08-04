//
//  SimpleTriangle.cpp
//  Class_Hierarchy
//
//  Created by Александр Нестеров on 8/4/24.
//

#ifndef SIMPLETRIANGLE.HPP
#define SIMPLETRIANGLE.HPP
#include "SimpleTriangle.hpp"

class SimpleTriangle : public Triangle {
public:
    SimpleTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle("Треугольник", a, b, c, A, B, C) {}
};
