#include <stdio.h>

int main() {
    int n = 5, i=0;
    for ( i = 1; i <= n; i++) {
        printf("%.*s\n", i, "*****");
    }
    return 0;
}
