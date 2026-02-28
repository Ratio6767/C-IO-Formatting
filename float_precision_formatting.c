#include <stdio.h>

int main() {
    double val = 100.453627;

    printf("Original value: %f\n\n", val);
    
    printf("Rounded to nearest digit: %.0f\n", val);
    printf("Rounded to nearest tenth: %.1f\n", val);
    printf("Rounded to nearest hundredth: %.2f\n", val);
    printf("Rounded to nearest thousandth: %.3f\n", val);
    printf("Rounded to nearest ten-thousandth: %.4f\n", val);

    return 0;
}
