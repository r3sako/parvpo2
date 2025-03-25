#include <iostream>
#include <chrono>
#include "functions.h"

int main() {
    const int iterations = 1000000000;
    double a = 1.0, b = -3.0, c = 2.0;
    double sum_x1 = 0.0, sum_x2 = 0.0;

    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < iterations; i++) {
        double D = calculate_discriminant(a, b, c);
        if (D >= 0) {
            double x1 = calculate_root1(a, b, D);
            double x2 = calculate_root2(a, b, D);
            sum_x1 += x1;
            sum_x2 += x2;
        }
    }

    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Sum of roots: x1 = " << sum_x1 << ", x2 = " << sum_x2 << std::endl;
    std::cout << "Execution time: " << elapsed.count() << " sec" << std::endl;

    return 0;
}