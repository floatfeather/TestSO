#include <stdio.h>

extern int AddNumber(int a, int b);

int main() {
    printf("%d", AddNumber(5, 6));
    return 0;
}
