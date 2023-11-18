#include "complex_class.h"

int main() {
    using namespace std;

    Complex first(1.1f, 1.2f);
    Complex second(1.0f, 5.0f);

    cout << first * second;
}