#pragma once

int64_t factor(int64_t n) {
    if (n < 0)
        return -1;

    int64_t rezult = 1;
    for (int64_t i = 1; i <= n; ++i) {
        rezult *= i;
    }

    return rezult;
}