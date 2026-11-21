#include <string>
#include <vector>

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void shift_left() {
    unsigned int n = 7u;
    unsigned int shifted = n << 4;
    (void)shifted;
}

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

void digit_sum() {
    int n = 9081;
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    (void)total;
}

extern "C" int lunar_delta();
extern "C" void serene_vale();
extern "C" void silver_quartz();
extern "C" void still_kite();

int main() {
    half_value();
    shift_left();
    count_zeros();
    digit_sum();
    serene_vale();
    silver_quartz();
    still_kite();
    return lunar_delta();
}
