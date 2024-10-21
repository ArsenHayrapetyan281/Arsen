#include "Sort.h"
#include <algorithm>

void sortComplexNumbers(std::vector<Complex>& arr) {
    std::sort(arr.begin(), arr.end(), [](const Complex& a, const Complex& b) {
        return a.magnitude() > b.magnitude();
    });
}
