#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Disable output buffering to ensure tests capture output immediately
    setvbuf(stdout, NULL, _IONBF, 0);

    int val_d, val_i, val_o, val_x;
    unsigned int val_u;

    scanf("%d", &val_d);
    printf("%d %d %o %u %x\n", val_d, val_d, val_d, val_d, val_d);

    scanf("%i", &val_i);
    printf("%d %d %o %u %x\n", val_i, val_i, val_i, val_i, val_i);

    scanf("%o", &val_o);
    printf("%d %d %o %u %x\n", val_o, val_o, val_o, val_o, val_o);

    scanf("%u", &val_u);
    printf("%d %d %o %u %x\n", val_u, val_u, val_u, val_u, val_u);

    scanf("%x", &val_x);
    printf("%d %d %o %u %x\n", val_x, val_x, val_x, val_x, val_x);

    return 0;
}
