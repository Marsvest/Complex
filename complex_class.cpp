#include "complex_class.h"
#include <cmath>

Complex::Complex(float r, float i) : real_part(r), imaginary_part(i) {}

Complex Complex::operator+(const Complex &other) const {
    Complex result;
    result.real_part = this->real_part + other.real_part;
    result.imaginary_part = this->imaginary_part + other.imaginary_part;
    return result;
}

Complex Complex::operator-(const Complex &other) const {
    Complex result;
    result.real_part = this->real_part - other.real_part;
    result.imaginary_part = this->imaginary_part - other.imaginary_part;
    return result;
}

Complex Complex::operator*(const Complex &other) const {
    Complex result;
    result.real_part = this->real_part * other.real_part - this->imaginary_part * other.imaginary_part;
    result.imaginary_part = this->real_part * other.imaginary_part + other.real_part * this->imaginary_part;
    return result;
}

Complex Complex::operator/(const Complex &other) const {
    const float eps = 1e-6;

    float divisor = (other.real_part * other.real_part) + (other.imaginary_part * other.imaginary_part);

    if (std::abs(divisor) < eps) {
        throw std::runtime_error("You can't divide by 0");
    }

    float newReal = ((real_part * other.real_part) + (imaginary_part * other.imaginary_part)) / divisor;
    float newImaginary = ((imaginary_part * other.real_part) - (real_part * other.imaginary_part)) / divisor;
    return Complex(newReal, newImaginary);
}

Complex Complex::operator^(double power) const {
    double magnitude = std::pow(std::sqrt(real_part * real_part + imaginary_part * imaginary_part), power);
    double angle = std::atan2(imaginary_part, real_part) * power;
    return Complex(magnitude * std::cos(angle), magnitude * std::sin(angle));
}

std::ostream &operator<<(std::ostream &os, const Complex &obj) {
    os << "Complex(" << obj.real_part << "f, " << obj.imaginary_part << "f)";
    return os;
}

bool Complex::operator<(const Complex &other) const {
    return this->get_length() < other.get_length();
}

bool Complex::operator>(const Complex &other) const {
    return this->get_length() > other.get_length();
}

bool Complex::operator==(const Complex &other) const {
    return this->get_length() == other.get_length();
}

bool Complex::operator!=(const Complex &other) const {
    return this->get_length() != other.get_length();
}

bool Complex::operator<(float other) const {
    return this->get_length() < other;
}

bool Complex::operator>(float other) const {
    return this->get_length() > other;
}

bool Complex::operator==(float other) const {
    return this->get_length() == other;
}

bool Complex::operator!=(float other) const {
    return this->get_length() != other;
}

bool Complex::operator<(int other) const {
    return this->get_length() < other;
}

bool Complex::operator>(int other) const {
    return this->get_length() > other;
}

bool Complex::operator==(int other) const {
    return this->get_length() == other;
}

bool Complex::operator!=(int other) const {
    return this->get_length() != other;
}

float Complex::get_length() const {
    return sqrt(pow(this->get_real_part(), 2) + pow(this->get_imaginary_part(), 2));
}

float Complex::get_real_part() const {
    return real_part;
}

float Complex::get_imaginary_part() const {
    return imaginary_part;
}

void Complex::set_real_part(float r) {
    this->real_part = r;
}

void Complex::set_imaginary_part(float i) {
    this->imaginary_part = i;
}