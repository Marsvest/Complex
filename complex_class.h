#pragma once

#include <iostream>

template<typename T>
class Complex {
private:
    T real_part;
    T imaginary_part;
public:
    Complex(T r = T(0), T i = T(0));

    Complex operator+(const Complex &other) const;

    Complex operator-(const Complex &other) const;

    Complex operator*(const Complex &other) const;

    Complex operator/(const Complex &other) const;

    Complex operator^(double power) const;

    template<typename U>
    friend std::ostream &operator<<(std::ostream &os, const Complex<U> &obj);

    bool operator<(const Complex &other) const;

    bool operator>(const Complex &other) const;

    bool operator==(const Complex &other) const;

    bool operator!=(const Complex &other) const;

    bool operator<(T other) const;

    bool operator>(T other) const;

    bool operator==(T other) const;

    bool operator!=(T other) const;

    T get_length() const;

    T get_real_part() const;

    T get_imaginary_part() const;

    void set_real_part(T r);

    void set_imaginary_part(T i);
};