#include "../include/split_chocolate.hpp"

bool is_valid_data(int n, int m) { 
    return (n > 0 && m > 0);
}

int split_chocolate(int n, int m) {
    return (n + m - 2) * is_valid_data(n, m);
}
