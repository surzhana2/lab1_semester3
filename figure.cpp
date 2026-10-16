#include "figure.h"
#include <cmath>
#include <iostream>
using namespace std;

Triangle::Triangle()    
    : x1(0), y1(0), x2(1), y2(0), x3(0), y3(1) {}   

Triangle::Triangle(double x1_, double y1_, double x2_, double y2_, double x3_, double y3_)
    : x1(x1_), y1(y1_), x2(x2_), y2(y2_), x3(x3_), y3(y3_) {}

Triangle::~Triangle() {
    cout << "Деструктор сработал для треугольника" << endl;
}    

double Triangle::perimeter() const {
    double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    return a + b + c;
}

double Triangle::area() const {
    return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

void Triangle::move(double dx, double dy) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
}

void Triangle::print() const {
    cout << "(" << x1 << "," << y1 << "), ("
         << x2 << "," << y2 << "), ("
         << x3 << "," << y3 << ")" << endl;
}

Triangle Triangle::operator-() const {       
    return Triangle(-x1, -y1, -x2, -y2, -x3, -y3);
}

bool Triangle::operator==(const Triangle& other) const {
    return fabs(area() - other.area()) < 1e-9;
}