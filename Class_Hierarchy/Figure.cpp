//
//  Figure.cpp
//  Class_Hierarchy
//
//  Created by Александр Нестеров on 8/4/24.
//

#include "Figure.hpp"

Figure::Figure(std::string name, int sides_count) : name(name), sides_count(sides_count) {}

Figure::Figure() : Figure("Фигура", 0) {}

std::string Figure::get_name() const {
    return name;
}

int Figure::get_sides_count() const {
    return sides_count;
}
