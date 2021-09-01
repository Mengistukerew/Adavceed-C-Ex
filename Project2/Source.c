#include <stdio.h>
int main() {
    char x;

    printf("Enter an char: ");

    scanf(" %c", &x);

    while (x != 'Q' && x != 'q') {

        printf("  %c", x);
        scanf(" %c", &x);
    }

    return 0;
}