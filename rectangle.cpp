//
// Created by Teodor on 18.11.2020.
//

#include "rectangle.h"

int Rectangle::square() {
    return a * b;
}

void Rectangle::printSquare() {
    cout << "Square of this rectangle is: " << this->square() << endl;
}

bool Rectangle::operator==(Rectangle rect) {
    if (this->a == rect.a && this->b == rect.b) {
        return true;
    } else {
        return false;
    }
}

bool Rectangle::operator>(Rectangle rect) {
    if (square() > rect.square()) {
        return true;
    } else {
        return false;
    }
}

bool Rectangle::operator<(Rectangle rect) {
    if (square() < rect.square()) {
        return true;
    } else {
        return false;
    }
}

istream &operator>>(istream &input, Rectangle &rect) {
    cout << "Enter one rectangle side:";
    input >> rect.a;
    cout << "Enter another rectangle side:";
    input >> rect.b;
    return input;
}

ostream &operator<<(ostream &output, Rectangle &rect) {
    output << "a = " << rect.a << "\tb = " << rect.b << endl;
    return output;
}

Rectangle &operator*=(Rectangle &rect, int times) {
    rect.a *= times;
    rect.b *= times;
    return rect;
}

void Rectangle::print() {
    cout << "a = " << a << "\tb = " << b << endl;
}
