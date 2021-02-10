//
// Created by Teodor on 18.11.2020.
//

#ifndef LAB6_RECTANGLE_H
#define LAB6_RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle : public error_code {

private:
    int a;
    int b;

public:
    Rectangle(int a) : a(a), b(a) {}

    Rectangle(int a, int b) : a(a), b(b) {}

    ~Rectangle() {}

    int square();

    void printSquare();

    bool operator==(Rectangle rect);

    bool operator>(Rectangle rect);

    bool operator<(Rectangle rect);

    friend istream &operator>>(istream &input, Rectangle &rect);

    friend ostream &operator<<(ostream &output, Rectangle &rect);

    friend Rectangle &operator*=(Rectangle &rect, int times);

    void print();

};

#endif //LAB6_RECTANGLE_H
