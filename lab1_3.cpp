#include <cmath>

double calculate_discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

double calculate_root1(double a, double b, double D) {
    return (-b + std::sqrt(D)) / (2 * a);
}

double calculate_root2(double a, double b, double D) {
    return (-b - std::sqrt(D)) / (2 * a);
}