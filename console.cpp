#include "scr/complex_class.h"

int main() {
    using namespace std;

    Complex<float> first(1, 1);
    Complex<float> second(1.0f, 5.0f);

    cout << first/second;
}