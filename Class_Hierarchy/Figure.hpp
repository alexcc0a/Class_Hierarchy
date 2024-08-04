//
//  Figure.hpp
//  Class_Hierarchy
//
//  Created by Александр Нестеров on 8/4/24.
//

#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <string>

class Figure {
protected:
    std::string name;
    int sides_count;

    Figure(std::string name, int sides_count);

public:
    Figure();
    virtual void print_info() const = 0;
    std::string get_name() const;
    int get_sides_count() const;
};

#endif
