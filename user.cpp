#include "user.h"
#include "figure.h"
#include <iostream>
using namespace std;

void User::demo() {
    Triangle t1;    
    Triangle t2(0, 0, 3, 0, 0, 4);  
    
    cout << "Треугольник t1: "; t1.print();
    cout << "Треугольник t2: "; t2.print();

    cout << "Периметр t2: " << t2.perimeter() << endl;
    cout << "Площадь t2: " << t2.area() << endl;

    t2.move(1, 1);
    cout << "После перемещения t2: "; t2.print();

    Triangle t3 = -t2;
    cout << "Унарный минус от t2: "; t3.print();

    if (t1 == t2) cout << "t1 и t2 равны по площади\n";
    else cout << "t1 и t2 не равны по площади\n";

    Triangle* dyn = new Triangle(1, 1, 2, 1, 1, 2);
    cout << "Динамический объект: "; dyn->print();
    delete dyn;
}