#ifndef FIGURE_H 
#define FIGURE_H 

class Triangle {
private:       
    double x1, y1, x2, y2, x3, y3;   

public: 
    Triangle();
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
    ~Triangle();
    
    double perimeter() const;    
    double area() const;
    void move(double dx, double dy);    
    void print() const;

    Triangle operator-() const;              
    bool operator==(const Triangle& other) const; 
};

#endif