#ifndef FORMULA_HPP
#define FORMULA_HPP
#include "factor.hpp"

int64_t formula(int64_t k, int64_t n) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
#endif