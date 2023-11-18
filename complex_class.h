#pragma once

#include <iostream>


class Complex {
private:
    float real_part;
    float imaginary_part;
public:
    Complex(float r = 0.0f, float i = 0.0f);

    Complex operator+(const Complex &other) const;

    Complex operator-(const Complex &other) const;

    Complex operator*(const Complex &other) const;

    Complex operator/(const Complex &other) const;

    Complex operator^(double power) const;

    friend std::ostream &operator<<(std::ostream &os, const Complex &obj);

    bool operator<(const Complex &other) const;

    bool operator>(const Complex &other) const;

    bool operator==(const Complex &other) const;

    bool operator!=(const Complex &other) const;

    bool operator<(float other) const;

    bool operator>(float other) const;

    bool operator==(float other) const;

    bool operator!=(float other) const;

    bool operator<(int other) const;

    bool operator>(int other) const;

    bool operator==(int other) const;

    bool operator!=(int other) const;

    float get_length() const;

    float get_real_part() const;

    float get_imaginary_part() const;

    void set_real_part(float r);

    void set_imaginary_part(float i);
};