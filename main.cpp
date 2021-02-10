#include "rectangle.h"

int main() {

    Rectangle rect1(10), rect2(10, 3), rect3(0, 0);

    cout << "\nMy rectangles\n" << endl;

    rect1.printSquare();
    rect2.printSquare();

    cout << "\nIs equal: " <<(rect1 == rect2) << endl;
    cout << "Has a larger area: " << (rect1 > rect2) << endl;
    cout << "Has a smaller area: " << (rect1 < rect2) << endl;

    rect2 *= 2;
    cout << "\nSquare of new rectangle: " << rect2.square() << endl;
    cout << "Sides of new rectangle: ";
    rect2.print();

    cout << "\nCreate a new rectangle" << endl;
    cin >> rect3;
    cout << "Sides of this rectangle: ";
    cout << rect3;

    int k;
    cout << "\nEnter multiplication figure:";
    cin >> k;
    rect3 *= k;
    cout << "Enlarged rectangle in " << k << " times:" << endl;
    rect3.print();

    return 0;
}

