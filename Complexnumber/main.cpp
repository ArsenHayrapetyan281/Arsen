#include <iostream>
#include <vector>
#include "Complex.h"
#include "Sort.h"

int main() {
    std::vector<Complex> numbers = {
        Complex(3, 4),
        Complex(1, -2),
        Complex(5, 5),
        Complex(-3, 0),
        Complex(0, 2)
    };

    std::cout << "Before sorting:\n";
    for (const auto& num : numbers) {
        std::cout << num << '\n';
    }

    sortComplexNumbers(numbers);

    std::cout << "\nAfter sorting by magnitude (descending):\n";
    for (const auto& num : numbers) {
        std::cout << num << '\n';
    }

    return 0;
}
